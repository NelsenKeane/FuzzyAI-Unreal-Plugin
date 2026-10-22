# FuzzyAI
Enemy Behaviour Framework powered by fuzzy logic and utility AI.

## Framework prototype: skeletons for the remaining layers

The observation layer below is implemented. The remaining framework now has compilable C++ templates with explicit inputs, outputs and responsibilities. These templates do not yet estimate player tendencies, run fuzzy models, score/select actions, execute gameplay, share knowledge or display a debugger.

Only **FuzzyAIComponent** is added to an enemy. Its optional **Decision Config** belongs to the prototype. Assigning it does not enable automatic decisions, change observation scheduling or start another component.

```text
FuzzyAIComponent
  Working: observations -> current store + local memory/event history
  Manual Preview Decision Pipeline
    evidence snapshot -> profile processor -> fuzzy interpreter -> utility selector
    stop at the first unfinished/unconfigured stage -> debug snapshot

Separate future boundaries:
  chosen action -> action executor -> game-specific GAS/movement
  approved profile evidence -> shared knowledge subsystem
  debug snapshot -> editor debugger presentation
```

### Script map

Headers are under `Source/FuzzyAIRuntime/Public/`; matching .cpp files are under Private/. Type-only headers have no implementation file. Classes prefixed with U are Unreal objects; F-prefixed types carry copied data.

| File / type | Responsibility and current behavior |
| --- | --- |
| Core/FuzzyAIComponent.h / UFuzzyAIComponent | Existing actor-facing coordinator. Adds optional DecisionConfig and manual PreviewDecisionPipeline; existing observation behavior remains active. |
| Core/FuzzyAIConfig.h / UFuzzyAIConfig | Shared Data Asset holding a profile definition, fuzzy model and utility action definitions. Stores no enemy runtime state. |
| Core/FuzzyAITypes.h | FFuzzyAIDecisionContext copies local facts, remembered facts, events, target identity/visibility and capture time. FFuzzyAIStageResult reports stage status/message. |
| Core/FuzzyAIPipeline.h / UFuzzyAIPipeline | Lazily owns separate profile/interpreter/selector objects for each component. Manual preview calls stages in order, stopping unless the preceding stage succeeds. Execution is excluded from preview. |
| Profiling/FuzzyProfileTypes.h | FFuzzyAIProfileMetric carries validity, value, sample count, confidence and evidence time. FFuzzyAIProfileSnapshot keeps behavior and performance metrics separate. |
| Profiling/FuzzyProfileDefinition.h / UFuzzyProfileDefinition | Shared authoring template for metric keys, evidence window and minimum samples. Defaults are provisional and currently unused by an estimator. |
| Profiling/FuzzyProfileProcessor.h / UFuzzyProfileProcessor | BuildProfile accepts local evidence and a definition. Returns NotConfigured or NotImplemented, with no derived estimates. Future work: opportunities, counts, rolling windows, smoothing and confidence. |
| Interpretation/FuzzyInterpretationTypes.h | Input bindings identify observation/behavior/performance sources. Semantic values carry explicit validity and a membership degree. |
| Interpretation/FuzzyModelAsset.h / UFuzzyModelAsset | Stores FLL text and input bindings. There is no importer, parser, normalization engine or fuzzylite dependency yet. |
| Interpretation/FuzzyInterpreter.h / UFuzzyInterpreter | Interpret accepts evidence, profile and model. Returns NotConfigured or NotImplemented, with no semantic values. |
| Utility/FuzzyUtilityTypes.h | Evaluation context, validity/eligibility/score, candidate scores and a nullable selected action. Unknown inputs and hard availability gates remain distinct from numeric scores. |
| Utility/FuzzyUtilityConsideration.h / UFuzzyUtilityConsideration | Abstract, inline-instanced Blueprint extension point. Const Evaluate must be stateless because its owning action asset is shared. The base returns NotImplemented and an invalid/ineligible value. |
| Utility/FuzzyUtilityAction.h / UFuzzyUtilityAction | Shared candidate definition with an action tag, description and inline consideration templates. Does not activate abilities or move actors. |
| Utility/FuzzyUtilitySelector.h / UFuzzyUtilitySelector | SelectAction accepts evidence and candidates. Returns NotConfigured or NotImplemented, with no scores or selected action. Aggregation, hard gates, ties and switching policy are future work. |
| Execution/FuzzyActionExecutor.h / UFuzzyActionExecutor | Blueprint adapter template with ExecuteAction and CancelAction. Base execution returns NotImplemented. It is not created/called by the preview. Future implementations must recheck authority/context/availability and clean up requests/tasks. |
| Knowledge/FuzzyAIKnowledgeSubsystem.h / UFuzzyAIKnowledgeSubsystem | Abstract world-subsystem boundary for explicit profile publication/lookup. No concrete instance, sharing policy, storage or replication exists. Publication returns NotImplemented; lookup returns false and an empty snapshot. |
| Debug/FuzzyAIDebugSnapshot.h | FFuzzyAIDebugSnapshot holds copied evidence, outputs and individual stage results. Contains no rendering/editor dependencies. |
| FuzzyAIEditor/Private/Debugger/FuzzyAIDebugger.h / FFuzzyAIDebugger | Editor registration/unregistration placeholders, called by FFuzzyAIEditorModule. No debugger tab or UI is registered yet. |
| FuzzyAIEditor/Private/Tests/FuzzyAIPrototypeTests.cpp | Checks that missing/unfinished stages remain explicit, no action or estimates are invented, and manual preview preserves observation collection. |

Existing observation scripts and compatibility APIs are documented in the sections below. FuzzyAIRuntime.cpp continues to register legacy redirects; the two-module layout is preserved.

### Read the prototype without implementing a whole system

Start with FuzzyAITypes.h, then read FuzzyAIPipeline.cpp to see the intended call order. Each processor resets its output before returning a result. **NotRun** means a stage was skipped; **NotReady** means observations are stopped; **NotConfigured** means a required definition is missing; **NotImplemented** means the configured stage is still a template. Succeeded and Failed are reserved for actual implementations. An empty/zero output never implies successful inference.

The pipeline receives copies of evidence already available to that enemy. It does not retrieve live hidden target values. Behavioral preferences remain separate from player performance; difficulty adjustment is not implemented. Shared knowledge requires an explicit future policy and is not fed automatically by local observation events.

### Minimal editor setup for a preview

1. Keep your existing FuzzyAIComponent observations. No new asset is needed for observation-only use.
2. Optionally create Data Assets of native types **FuzzyAIConfig** and **FuzzyProfileDefinition**. Assign the profile definition to the config and the config to the component's **Decision Config**.
3. Start AI, then call **Preview Decision Pipeline** from a Blueprint test input. Break its returned debug snapshot and print **Profile Stage > Status / Message**.
4. With no config, expect NotConfigured. With a config/profile definition, expect NotImplemented. Later stages remain NotRun; Selected Action remains null. Calling while stopped reports NotReady.
5. Optional **FuzzyModelAsset** and **FuzzyUtilityAction** assets show the later authoring slots, but cannot produce decisions yet. Create a Blueprint child of **FuzzyUtilityConsideration** to inspect its Evaluate contract; the selector does not invoke considerations yet.

No production Blueprint, Data Asset instance, Gameplay Ability, Gameplay Effect or gameplay tag is created/modified by this scaffold. Observation source/perception wiring remains the existing editor setup described below.

### Implement one layer at a time

1. Agree on one profile metric and its opportunity definition; implement it with validity, sample count and confidence.
2. Add one model/input mapping and verify units/unknown evidence before integrating fuzzy evaluation.
3. Implement one consideration, candidate validation and the selection policy.
4. Connect one game-specific execution adapter, including completion/cancellation and authority checks.
5. Add sharing policy and debugger presentation independently once their data contracts are stable.

Decision scheduling, profile reset/target-change policy, difficulty adaptation, FLL tooling, action completion feedback, shared-state lifetime and debugger UI remain unfinished. The skeleton deliberately does not subscribe the full pipeline to every observation change.

### Prototype verification

UE 5.7 Editor compilation and Unreal Header Tool checks passed. All ten FuzzyAI automation groups passed with zero test warnings/errors: the nine observation regression groups and **FuzzyAI.Prototype.UnfinishedStages**. This verifies the unfinished-stage boundary, not finished profiling/fuzzy/utility/gameplay behavior. The existing OBS_SelfHealth Blueprint loaded/compiled without saving; its source hash remained unchanged.

Report: `Saved/Automation/FuzzyAIPrototype/index.json`. Log: `Saved/Logs/FuzzyAIPrototype.log`. Run all groups with the existing command below using `Automation RunTests FuzzyAI.`, or run only the skeleton check with `Automation RunTests FuzzyAI.Prototype`. No production Content packages were saved. The new preview has not been wired into a production enemy Blueprint or verified in combat-map PIE.

The runtime skeleton also compiled successfully for the UE 5.7 Game target using `GameAnimationSample Win64 Development -Module=FuzzyAIRuntime -NoLink`. This checks compilation without editor code; full game linkage, cooking and packaging were not performed.

## Recommended workflow: inline Blueprint observations

This workflow follows the observation design in [Fuzzy AI Plugin Progress](https://chatgpt.com/share/6ad9efd2-107c-83ec-a6a4-49ea3b693d2b). Add one FuzzyAIComponent to an enemy, then configure its **Observations** inline-object array. A separate Data Asset instance is no longer required for new sensors.

| Class | Responsibility |
| --- | --- |
| UFuzzyObservation | Abstract Blueprintable, EditInlineNew, DefaultToInstanced sensor base |
| UFuzzyObservationManager | Creates per-enemy runtime copies, runs lifecycle hooks and schedules sensors |
| UFuzzyObservationStore | Typed keyed blackboard shared by observation consumers |
| UFuzzyDistanceObservation | Native visible-target distance, key Target.Distance |
| UFuzzyLineOfSightObservation | Reports supplied sight state as Target.HasLineOfSight; does not perform traces |
| UFuzzyTargetLocationObservation | Current visible location with last-success memory, key Target.VisibleLocation |

All observation files are under `FuzzyAIRuntime/Public/Observation/` and matching Private folders. They remain independent of this game's combat classes and GAS. The plugin has two compilation modules: **FuzzyAIRuntime** for actor-facing code and observation layers, and **FuzzyAIEditor** for editor-only automation. Existing asset reader classes remain supported inside FuzzyAIRuntime.

```text
Source/
  FuzzyAIRuntime/
    Public/Core/FuzzyAIComponent.h
    Public/Core/                     (config, evidence/result types, manual pipeline)
    Public/FuzzyAIComponent.h         (forwarding include)
    Public/Observation/               (sensors, store, manager, legacy readers, memory)
    Private/Core/                     (component coordination)
    Private/Observation/              (layer implementations)
    Public/Profiling/                 (profile definition, metrics, processor template)
    Public/Interpretation/            (model/bindings, interpreter template)
    Public/Utility/                   (action, consideration, selector templates)
    Public/Execution/                 (executor template)
    Public/Knowledge/                 (abstract shared-knowledge boundary)
    Public/Debug/                     (runtime debug snapshot)
    Private/FuzzyAIRuntime.cpp         (module startup and compatibility redirects)
  FuzzyAIEditor/
    Private/Debugger/                 (registration/UI placeholders)
    Private/Tests/                    (native and Blueprint automation)
```

FuzzyAIObservation, FuzzyAIInterpretation, FuzzyAIUtility and FuzzyAIDebugger source modules have been retired. The latter three contained module boilerplate only. Runtime startup registers package/class/struct/enum redirects from `/Script/FuzzyAIObservation` to `/Script/FuzzyAIRuntime`; reflected C++ names and existing observation include paths are retained. Keep these redirects for existing assets. Native consumers must replace old module dependencies with `FuzzyAIRuntime` and recompile; redirects handle serialized assets, not native linker dependencies. The verified source backup and migration details are in [SharedChatMigration.md](../../../Design/AI/Observation/SharedChatMigration.md).

### Author and configure a Blueprint sensor

1. Create a Blueprint Class derived from **FuzzyObservation**, for example BP_SelfHealth.
2. Set Observation Key = `Self.Health`, Expected Value Type = Float, Subject = Self, and Update Policy = Source Event (or Interval for a first polling test).
3. Override **Sample(Observer, Target, Store)**. Read Health from Observer using your project's GAS Blueprint nodes. On success call Store **Set Float(Observation Key, Health)**; on failure call Store **Invalidate(Observation Key, Reason)**.
4. Add an element to the component's **Observations** array and select the Blueprint observation type in the inline object picker. Expand it to configure per-enemy settings. Native Distance/Line Of Sight/Target Location classes can be selected directly too.
5. Start AI or use Auto Start. The component duplicates each enabled template into a separate runtime sensor owned by that enemy. Editing runtime sensor state cannot modify the configured template. Stop/start applies configuration edits.

The C++ property for this new array is `ObservationInstances`. The original `Observations` property retains its old type and serialized identity, displayed as **Legacy Asset Observations**, so existing component Blueprints keep their assigned Data Asset entries. Do not configure two sensors to publish the same output key.

Each instance has Enabled, optional Observation ID, optional primary Observation Key/Expected Value Type, Subject, update policy/interval, tolerance, target visibility/context flags, and memory settings. A missing Observation ID falls back to the primary key, then the instance name. IDs must be unique across active sensors and legacy entries. Disabled templates are not instantiated and do not enable ticking.

### Several return values from one sensor

Sample writes to a store rather than returning one struct. One sample may publish several independently typed facts:

```text
Sample(Observer, Target, Store)
    Store.SetFloat("Self.Health", Health)
    Store.SetFloat("Self.MaxHealth", MaxHealth)
    Store.SetBoolean("Self.IsAlive", Health > 0)
```

The optional primary key gives the store a known invalid record before the first successful sample and validates its expected type. Additional keys are discovered when published. Every previously owned key omitted by a later sample becomes invalid instead of silently keeping an old current value. Two sensors claiming one key invalidate that output and report a write diagnostic; no silent overwrite occurs. Float/vector non-finite values are invalidated.

### Event binding lifecycle

- **On Initialize:** bind source delegates using Get Observation Context. Called once per runtime session before the initial sample.
- **On Context Changed(Previous, Current):** rebind target-specific sources when needed. Both contexts are supplied so old bindings can be removed. Read Get Observation Context for Subjects and visibility; Get World resolves through the owning component.
- **Request Refresh:** call this on the runtime observation from a source notification. It schedules collection through the coordinator; a source callback should update this instance's state, then request Sample.
- **Record Observed Event:** forward individual attacks/dodges/parries to bounded history without deduplicating occurrences or deriving behavioural profiles.
- **On Shutdown:** unbind delegates and cancel tasks/timers created by the sensor. Called on Stop AI, restart cleanup and EndPlay. Store/coordinator references are released afterward.

Sample is synchronous. Keep latent/asynchronous work outside it and request another sample on completion. Store writes are accepted only during a managed Sample transaction, not from arbitrary external consumers, initialization hooks or source callbacks. Reentrant requests are deferred safely. All enabled sensors receive an initial sample, including Source Event and Manual policies.

### Store access for other systems

Use **FuzzyAIComponent.Get Observation Store** to obtain the blackboard. It provides Get Float/Integer/Boolean/Vector/Object/GameplayTag, Try Get Observation, Get Snapshot and Get Write Errors. Typed getter success requires an existing, valid record of the requested type; zero/false/null values may still be valid. Current-record timestamps and last-known memory remain distinct.

Readers see committed data throughout sampling. The batch commits all new sensor and legacy asset outputs before memory updates and change notifications. Interpretation/utility should read this store or the component snapshots after On Observations Changed, without calling sensors directly. No fuzzy inference, utility scoring or execution logic has been introduced into observations.

### Quick new-workflow test

1. Add native FuzzyDistanceObservation, FuzzyLineOfSightObservation and FuzzyTargetLocationObservation inline; no Data Assets are needed.
2. Feed Update Target Sighting(Target, true) from a controlled test input or your perception integration.
3. Read `Target.Distance` with Get Float and `Target.HasLineOfSight` with Get Boolean. Read Get Target Location Knowledge for active and remembered positions.
4. Feed sight false and move the target. Current distance/location become unavailable, sight is valid false, and last-seen location stays unchanged until expiry.
5. Replace a native sensor with a Blueprint child overriding Sample and confirm the same store-based workflow.

The legacy setup below remains supported. Its array is now labelled **Legacy Asset Observations** in Details.

## Observation runtime and single component

Add **one FuzzyAIComponent** to an enemy. It owns per-enemy ObservationRuntime and ObservationMemory UObjects internally; these are not additional Actor Components.

```text
Enemy Actor
  FuzzyAIComponent (FuzzyAIRuntime module)
    ObservationManager -> per-enemy inline sensors -> ObservationStore
    ObservationRuntime -> shared legacy assets     -> ObservationStore
    ObservationMemory  <- committed current facts and individual observed events
    Change dispatchers -> consumers read store snapshots and memory
```

The component coordinates collection, scheduling and notifications. The other layers have skeletons as listed above; their actual algorithms, action execution, sharing and debugger UI remain future work. GAS and AI Perception integration are explicit source connections, not automatic dependencies.

### Configuration

For the legacy asset path, add **Fuzzy AI** through Add Component on an enemy Blueprint. Add a Data Asset instance to each Legacy Asset Observations entry. Configuration is copied on Start AI; stop/start to apply edits. Missing assets/keys, duplicate keys and invalid timing/tolerance settings reject the entire configuration. **Get Configuration Errors** exposes the failures.

| Entry setting | Meaning |
| --- | --- |
| Observation | Data Asset instance with the reading definition |
| Update Policy | Interval, Source Event, Every Frame or Manual |
| Interval | Sampling interval in game seconds; minimum 0.01, default 0.2 |
| Change Tolerance | Absolute float difference or vector distance required for notification; default 0.01 |
| Requires Visible Target | Reject before executing Blueprint when sight is unavailable |
| Uses Target Context | Enable for Custom readers using Target/Subjects; Target subjects and visibility-gated entries are automatically context-dependent |
| Remember Last Successful | Retain successful readings separately from current validity |
| Memory Duration | Retention since last successful sample; zero disables time expiry, not capacity limits |

Every entry receives an initial sample, including Manual and Source Event. Context-dependent entries also refresh immediately on target, visibility or Subjects changes.

- **Interval:** one shared component timer checks each entry's deadline. Missed intervals sample once, without catch-up bursts. The timer also performs housekeeping at least every 0.25 game seconds.
- **Source Event:** bind a real source notification to **Notify Observation Source Changed(Key)**. Only Source Event entries are accepted. Arbitrary variable changes cannot be discovered automatically.
- **Every Frame:** enables component ticking and samples only entries with this policy. Tick remains disabled when no entry needs it.
- **Manual:** otherwise refresh only through **Request Observation Refresh(Key)** or **Refresh All Observations**. These explicit requests work for every policy.

For GAS Health/Stamina, forward your existing attribute-change notification using the entry's exact key. The asset still reads the attribute through GAS getters and checks Successfully Found Attribute. Establish sources/subscriptions before Start AI when initialization order matters; disable Auto Start for this setup. The integration creating subscriptions must unbind them on teardown.

### Storage and memory

Current records contain Key, Result, weak Observer/Target references, context identity, Last Attempt Time, Last Success Time and Last Change Time. Times are world game seconds; -1 means no sample/success yet. **Try Get Observation** returning true means a sampled key exists, not that Result.IsValid is true or that it is recent. Getters return copies and never rerun readers.

Unchanged successful samples refresh timestamps without notifying. Float/vector tolerances compare against the last notified baseline, so slow accumulated changes eventually notify. Invalidity, type, failure reason and target/context changes also notify. Previous in the dispatcher is the previous sampled record, not necessarily the comparison baseline.

Remembered facts retain successful samples and their timestamps. Failed reads invalidate current knowledge without overwriting memory. Memory is keyed by observer, observation key and target identity; explicitly query an old target to retrieve its retained information. Target destruction removes its facts during housekeeping. Custom readings without a target can use a null For Target.

Max Remembered Observations defaults to 128; capacity eviction removes the least recently successfully observed record. Expired memories become unavailable through getters immediately, even before housekeeping physically removes them. Successful samples renew expiry even if the value is unchanged.

**Record Observed Event** stores every occurrence with a runtime-assigned timestamp. Identical consecutive dodge events remain separate. History is bounded by Max Observed Events (default 128) and Observed Event Max Age (default 30 seconds; zero disables age expiry). Event keys are FNames and Payload is an optional typed result. Supply only events the enemy is allowed to know; inference belongs in later interpretation code.

Stop AI stops collection but retains cached records with their original timestamps. Get Target Location Knowledge reports no active location while stopped. Starting after a stop begins a fresh cache/memory session. Clear Memory removes remembered facts and events; later successful samples can remember facts again.

### Target visibility and location

Set Target selects an actor and resets visibility when identity changes. Feed confirmed sight through **Update Target Sighting(Target, Visible)**, or use Set Target followed by Set Target Visibility. A successful sighting can select a target; the integration decides target selection. Sight loss for another target is ignored.

If using AI Perception, filter its updates to the **Sight** sense before forwarding Successfully Sensed. Hearing/damage must not grant sight. Custom traces can supply visibility instead. The component does not perform its own sight traces. Continue interval/frame sampling while visible; sight-transition events alone are not a continuous movement feed.

Two native Data Asset classes are included for testing without Blueprint reader graphs:

- **FuzzyAIDistanceObservation:** key `Relationship.Distance`, Float in cm, reads distance only while Context.TargetVisible is true.
- **FuzzyAIVisibleTargetLocationObservation:** key `Target.VisibleLocation`, Vector, reads position only while Context.TargetVisible is true.

For location use Interval = 0.15, Requires Visible Target = true, Remember Last Successful = true and Memory Duration = 10.

```text
Visible at A: active = A, remembered = A
Visible at B: active = B, remembered = B
Sight lost:   active unavailable, remembered = B
Hidden at C:  active unavailable, remembered remains B
Seen at D:    active = D, remembered = D
```

**Get Target Location Knowledge(LocationKey)** returns Target, Has Active Location, Active Location, Has Last Seen Location, Last Seen Location, Last Seen Time and Last Seen Age. The default key is `Target.VisibleLocation`. Availability flags represent missing vectors; zero is a valid position.

Custom readers must honor the same knowledge policy. Enable Requires Visible Target for live target readings; an unrestricted Get Actor Location in another reader can bypass fair perception.

### Public API and module communication

| Component API | Purpose |
| --- | --- |
| Start AI / Stop AI / Is Observing | Lifecycle |
| Set Target / Get Target / Update Target Sighting / Set Target Visibility | Target and sight context |
| Set Observation Subjects | Additional actors for Custom readers |
| Request Observation Refresh / Refresh All Observations | Explicit collection |
| Notify Observation Source Changed | Forward Source Event updates |
| Try Get Observation / Get Observation Snapshot | Current records by value |
| Try Get Remembered Observation / Get Memory Snapshot | Unexpired remembered facts |
| Get Target Location Knowledge | Combined active/remembered vector view |
| Record Observed Event / Get Observed Events / Clear Memory | Local event history/reset |

Dispatchers:

- **On Observation Changed(Key, Previous, Current, Had Previous):** first sample or meaningful current-record change. Had Previous distinguishes initial samples.
- **On Observations Changed(Changed Keys):** once after a refresh batch with changed observations; future interpretation can evaluate once for the batch.
- **On Memory Changed(Changed Keys):** remembered value/availability changes, expiry, eviction or clearing. Timestamp-only renewals stay quiet. Query the memory snapshot for target-specific details.
- **On Observed Event Recorded(Event):** each occurrence, without deduplication.

All cache/fact-memory writes for a refresh complete before dispatchers fire. Reentrant refresh/context edits from listeners are deferred to the next game-thread tick. Independent external source notifications are independent batches.

Runtime objects, writable containers, timers, subscriptions and comparison baselines are private to the component/layers. Blueprint getters return records/snapshots by value. C++ runtime methods are orchestration APIs, not additional actor-facing Blueprint controls. Future modules receive snapshots from the coordinator; observation never depends back on interpretation or utility.

Consuming C++ modules depend on `FuzzyAIRuntime` and include `Core/FuzzyAIComponent.h` (the former `FuzzyAIComponent.h` include forwards to it). The runtime module depends only on Core, CoreUObject, Engine and GameplayTags. UnrealEd, BlueprintGraph and KismetCompiler dependencies belong to FuzzyAIEditor and are excluded from game targets.

Auto Start and Server Only are enabled by default. Caches and dispatchers are local, not replicated; client UI/debugging needs an explicit replication path. EndPlay clears component timers, deferred work and target-destruction binding. Retained actor references are weak.

## Observation assets

The `FuzzyAIRuntime` module retains these legacy asset APIs:
- `UFuzzyAIObservationAsset`: shared Blueprintable reading definition.
- `FFuzzyAIObservationContext`: Observer, Target, Target Visible and an optional Subjects actor array, supplied at runtime.
- `FFuzzyAIObservationResult`: typed value, validity and failure reason.
- `UFuzzyAIObservationResultLibrary`: Make Float/Integer/Boolean/Vector/Object/Gameplay Tag Observation Result nodes, plus Make Invalid Observation Result.

Include `Observation/ObservationAsset.h`; consuming C++ modules depend on `FuzzyAIRuntime`.

### Create an Observation Blueprint
1. In the Content Browser choose Blueprint Class, expand All Classes, search for FuzzyAIObservationAsset and create a child Blueprint.
2. In Class Defaults set Observation Key, Description, Subject and Expected Value Type.
3. Override the `Read Observation` function. Break the Context input to access Observer, Target and Subjects. `Get Subject Actor` resolves Self/Target using the configured Subject; Custom deliberately returns no single subject.
4. Read your game data and return a typed result using a Make ... Observation Result node. Return Make Invalid Observation Result if the source is unavailable.
5. Compile the Blueprint. To create reusable configuration instances, choose Miscellaneous > Data Asset and select this Blueprint class.
6. From a calling Blueprint, obtain the Data Asset instance, Make Fuzzy AI Observation Context with actor references, then call `Observe`. Break its result and inspect Is Valid before using the field corresponding to Value Type.

A generic Data Asset instance cannot supply a new function graph: author the reading override in the Blueprint class first.

### Example readings
- **Distance**: Subject = Custom; Key = Relationship.Distance; Expected Value Type = Float. Validate Context.Observer and Context.Target. Get Distance To (Observer to Target), then Make Float Observation Result. Unreal distance is in cm.
- **Health**: Subject = Self or Target; Expected Value Type = Float. Get Subject Actor, then use your project's GAS Blueprint nodes to read its Health attribute. Check whether the attribute/source was found, then return Float or Invalid. The observation module itself has no GameplayAbilities dependency.
- **Weapon**: Subject = Target; Expected Value Type = Object. Get Subject Actor and call your equipment interface to retrieve the weapon actor or item Data Asset. Return Make Object Observation Result. A successful read with no weapon may intentionally return a valid null object; an unavailable source should return Invalid.
- **Terrain**: Subject = Custom. Perform your trace in the override; return slope as Float, normal as Vector, physical material as Object or an authored category as Gameplay Tag.

### Contract and limitations
`Observe` checks the key, required Self/Target, returned type and non-finite float/vector values. Custom readers validate whichever actors/locations they require. Default Read Observation returns Invalid until overridden. Call `Observe`, not the raw override, to retain validation.

Assets store configuration, not current readings, actor history or delegate subscriptions. Keep Read Observation side-effect-free because the asset can be shared by many enemies. Actual actors live in the caller's Context, never asset defaults. The enum is native; adding arbitrary enum entries alone does not add a new storage type.

The component/runtime layer above adds scheduling, current storage, timestamps and local memory. Source adapters and authored Blueprint readers still choose what the observer is allowed to know. Utility/fuzzy processing has placeholder contracts only; a debug window is not implemented.

No gameplay tags or content assets are registered/created by this change. GameplayTag output uses tags already registered by the consuming project.

### Verification
Build GameAnimationSampleEditor for UE 5.7. Create the Distance Blueprint above and a Data Asset instance; call Observe using two actors 250 cm apart and expect a valid Float of 250. Missing either actor should return Invalid. Return a Boolean with Expected Value Type = Float and confirm Observe rejects it. Zero distance and false Boolean are valid readings, not unavailable data.

### Minimal single-component test

1. Create Data Asset instances from the two native observation classes above.
2. Add FuzzyAIComponent to a test enemy. Configure both entries for Interval = 0.15 and Requires Visible Target. Enable Remember Last Successful on location.
3. Put a target actor in the level and call Update Target Sighting(Target, true). This is a controlled test input, not automatic perception.
4. Bind On Observations Changed and print Get Target Location Knowledge. If binding after component Auto Start, query the initial snapshot too; dispatchers do not replay old notifications.
5. Move the visible target: active/remembered positions follow. Send sight false and move it again: active becomes unavailable; memory stays at the last visible point until expiry.
6. Reacquire sight, then switch targets. Check that target identity prevents reuse of another target's memory.
7. Add your self-health Data Asset with Source Event policy. Forward its change notification and confirm health updates without frame ticking.

No production maps, enemy Blueprints, Data Asset instances, Gameplay Abilities, Gameplay Effects or gameplay tags are created/modified by this C++ implementation. These steps integrate it with your existing enemies and perception/GAS sources.

### Automation

Build GameAnimationSampleEditor for UE 5.7, then run **FuzzyAI.Observation** in Session Frontend > Automation with the Engine filter. Nine test groups cover initial/unchanged/invalid results, tolerance accumulation, update policies, memory identity/expiry/capacity, repeated events, separate enemy state with shared assets, source refresh, sight loss/hidden movement, target destruction, restart, typed store transactions/multiple outputs/missing outputs/conflicts, inline instance ownership/shutdown, a compiled Blueprint Sample override, and legacy asset compatibility. Pass `-FuzzyAIValidationAsset=/Game/YourObservation.YourObservation` to additionally load/compile an authored legacy observation without saving it.

Command-line equivalent (PowerShell):

```powershell
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Build/BatchFiles/Build.bat' GameAnimationSampleEditor Win64 Development '-Project=D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' -WaitMutex -NoHotReloadFromIDE
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Binaries/Win64/UnrealEditor-Cmd.exe' 'D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' /Engine/Maps/Entry '-ExecCmds=Automation RunTests FuzzyAI.Observation' '-TestExit=Automation Test Queue Empty' -unattended -nop4 -NullRHI -nosound -DisablePlugins=Aura '-ReportExportPath=D:/Unreal Projects/GameAnimationSample/Saved/Automation/FuzzyAIObservation'
```

Automation creates transient worlds/assets and saves no Content packages. The final validation outcome is recorded in the task handoff and MEMORY.md. Existing enemy Blueprint gameplay wiring remains an integration step.

Post-consolidation validation (2026-10-22): UE 5.7 GameAnimationSampleEditor build passed. All nine `FuzzyAI.Observation` automation groups passed together with zero test warnings/errors. The compatibility test resolves all six moved classes, seven structs and three enums through their former script paths and verifies their runtime package. `/Game/CombatSystem2/Enemies/EnemyAI/Observations/OBS_SelfHealth` loaded and compiled without saving; its SHA-256 remains unchanged. Report: `Saved/Automation/FuzzyAIConsolidation/index.json`; log: `Saved/Logs/FuzzyAIConsolidation.log`. Existing combat-map enemy/GAS/perception wiring still requires integration and live PIE verification. [Backup and migration details](../../../Design/AI/Observation/SharedChatMigration.md).

The runtime module also passed UE 5.7 Game-target compilation with `GameAnimationSample Win64 Development -Module=FuzzyAIRuntime -NoLink`. This checks its non-editor compilation path; it is not a full game link, cook or packaging test.
