# FuzzyAI
Core component, inline observations, utility actions, optional fuzzy interpretations and editor debugger for enemy AI.

Add one **FuzzyAIComponent** to an enemy. Configure its **Observations** array with inline sensor objects. Each enemy receives independent runtime sensor instances, a current-value store and local memory. No additional Actor Components are required.

The observation layer feeds configurable utility decisions. Inline actions combine response-curve considerations, optional behavioral interpretations and hard eligibility checks, then execute navigation, granted GAS abilities or Blueprint custom behavior. Action IDs are project-editable Gameplay Tags under AI.Action, separate from GAS state and event tags. Per-enemy copies isolate execution state. A shared FuzzyAIDecisionProfile can supply reusable definitions.

See [Utility setup and architecture](../../Design/AI/Utility/README.md) for a complete editor walkthrough, Retreat/Heal and Dash Attack examples, event-history inputs, fuzzy rules, uncertain input scoring, lifecycle behavior and validation boundaries. Existing observation-only configurations remain supported with an empty Actions array or Enable Decisions disabled. No production enemy is assigned actions automatically.

## Reading order and file responsibilities

Every source/build/test file starts with a two-line purpose note. Read each header before its matching implementation under Private/. Type-only headers have no implementation file.

The component, observation types/classes, native sensors, debugger, tests and build rules have named folding regions. Expand or collapse them using the gutter controls in Rider or Visual Studio. C++ uses `#pragma region` / `#pragma endregion`; the C# build rules use `#region` / `#endregion`. These markers organize the editor view without changing runtime behavior. The tiny forwarding header and runtime module registration file remain ungrouped.

In `Core/FuzzyAIComponent.h`, **Scheduling and Deferred Actions** contains the private `DeferredActions` array. It holds callable operations, not observation records. In the implementation's **Deferred Actions** region, `Defer()` queues requests received while the component is already processing and schedules a next-tick timer. The callback moves the queued work into a local array and executes it after the current update. This prevents callbacks from modifying the observation layer during sampling or notifications. `StopAI()` and `EndPlay()` clear the timer and discard pending actions with `DeferredActions.Reset()`.

| Order | File | Purpose |
| --- | --- | --- |
| 1 | [Core/FuzzyAIComponent.h](Source/FuzzyAIRuntime/Public/Core/FuzzyAIComponent.h) | Public configuration, target/sight inputs, refresh requests, cached getters and dispatchers. Skim this, then return to its implementation at step 8. |
| 2 | [ObservationTypes.h](Source/FuzzyAIRuntime/Public/Observation/ObservationTypes.h) + .cpp | Actor context, typed values, validity and pure result construction/comparison helpers. |
| 3 | [ObservationRuntimeTypes.h](Source/FuzzyAIRuntime/Public/Observation/ObservationRuntimeTypes.h) | Update policies, declared output schemas and per-output change/memory settings, timestamped records, remembered facts, events and target-location knowledge. |
| 4 | [FuzzyObservation.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservation.h) + .cpp, then [Sensors/FuzzyStandardObservations.h](Source/FuzzyAIRuntime/Public/Observation/Sensors/FuzzyStandardObservations.h) + .cpp | Sensor settings/lifecycle and concrete distance, sight-state and location examples. |
| 5 | [FuzzyObservationStore.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservationStore.h) + .cpp | Current typed readings, managed write transactions, output ownership, timestamps and change detection. |
| 6 | [FuzzyObservationManager.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservationManager.h) + .cpp | Configuration checks, per-enemy sensor copies, due-sensor selection, context updates and sampling. |
| 7 | [ObservationMemory.h](Source/FuzzyAIRuntime/Public/Observation/ObservationMemory.h) + .cpp | Last-successful facts, individual events, identity, expiry and bounded capacity. |
| 8 | [Core/FuzzyAIComponent.cpp](Source/FuzzyAIRuntime/Private/Core/FuzzyAIComponent.cpp) | Connect the pieces: StartAI -> RefreshAllObservations -> ProcessRefresh, then source requests, timers/tick, target changes and StopAI/EndPlay. |
| 9 | [FuzzyAIObservationTests.cpp](Source/FuzzyAIEditor/Private/Tests/FuzzyAIObservationTests.cpp) | Executable examples for sampling, policies, memory, typed storage, separate enemies, Blueprint sensors and the inline-only API. |

Read [ObservationKeys.h](Source/FuzzyAIRuntime/Public/Observation/ObservationKeys.h) and its matching .cpp after the data types to see the registered default keys.

Read module/build infrastructure last: [runtime startup](Source/FuzzyAIRuntime/Private/FuzzyAIRuntime.cpp), [editor startup](Source/FuzzyAIEditor/Private/FuzzyAIEditor.cpp), [runtime dependencies](Source/FuzzyAIRuntime/FuzzyAIRuntime.Build.cs) and [editor dependencies](Source/FuzzyAIEditor/FuzzyAIEditor.Build.cs). The [forwarding component header](Source/FuzzyAIRuntime/Public/FuzzyAIComponent.h) includes Core/FuzzyAIComponent.h.

For the debugger, read [FuzzyAIDebugModel.h](Source/FuzzyAIEditor/Private/Debugger/FuzzyAIDebugModel.h) and its implementation first (world discovery and display snapshots), then [SFuzzyAIDebugger.h](Source/FuzzyAIEditor/Private/Debugger/SFuzzyAIDebugger.h) and its implementation (Slate layout, selection and display refresh). `FFuzzyAIEditorModule` in editor startup registers the tab and Window menu entry. [FuzzyAIDebuggerTests.cpp](Source/FuzzyAIEditor/Private/Tests/FuzzyAIDebuggerTests.cpp) contains transient-world examples.

## FuzzyAI editor debugger

Open **Window > FuzzyAI Debugger**. The tab can be docked or floated like other Unreal panels.

1. Start Play or Simulate with an enemy that has FuzzyAIComponent. No additional component or Blueprint binding is needed for the debugger.
2. Click **Enemies** on the bottom bar to open the enemy drawer, then select the enemy/component. Search by actor, component or world name. **Inspect** uses a selected actor in the listed world; it does not remap an editor actor to a PIE copy.
3. Read status/target, then switch layers: **Facts**, **Fuzzy**, **Utility**, **Run**. Hover **Issues** for diagnostics. Select a response row for its captured curve. See [Layer debugger](../../Design/AI/Utility/Debugger.md).

| Panel | What it shows | Age means |
| --- | --- | --- |
| Observations | Committed keys, type, value, validity, target/subject, failure reason or success/change ages | Time since the last sampling attempt |
| Memory | Successful remembered values, their target identity, and remaining time before expiry | Time since the last successful observation |
| Events | Separate event occurrences, newest first, with optional payload, source and target | Time since the event was received |

The bottom **Enemies** drawer starts closed and opens over the debugger without resizing the observation tables. Select an enemy, press **Escape**, click outside the drawer in the observation area, or click the bottom bar again to close it. Its search text and selected enemy survive closing/reopening and display refreshes.

Click the header of **Observations**, **Memory** or **Events** in Facts to collapse or expand it. The three panels start expanded and keep a minimum height of **180 Slate units** each. Scroll vertically in short tabs and horizontally in narrow tables (minimum width **1100 units**). Splitters resize expanded panels; collapse states survive refresh and enemy selection changes.

Hover over a cell to read its full text. Drag vertical panel splitters and table column dividers to resize them. An invalid current reading is displayed as **Unavailable**, without exposing its old value; the old successful value belongs in Remembered Facts. A valid false, zero, origin vector or null object remains a valid reading. Events can be recorded without a payload.

**Live** refreshes the selected display every 0.25 seconds and discovers actors once per second. Uncheck it to freeze; **Refresh** reads cached data once. Destroyed selections clear even when frozen. Display refresh never samples, scores, executes, clears memory or modifies targets. Ages use world time. Stopped AI retains cached readings.

Before play, the picker lists components in the editor world, which normally have no runtime readings. During play, it lists PIE/game instances instead of their editor copies. Each entry includes its world and standalone/server/client role. The debugger can inspect only worlds inside this editor process: use single-process multiplayer PIE to inspect multiple instances. Server Only defaults to true, and the runtime cache is not replicated, so a client entry can legitimately have no data. External servers and separate game processes are not connected to this window.

The debugger lives entirely in **FuzzyAIEditor**. Its layout and read-only behavior are independent of the observation schema; it displays the full Gameplay Tag keys from current and remembered records.

```text
Enemy Actor
  FuzzyAIComponent
    ObservationManager -> per-enemy sensors -> ObservationStore
    ObservationMemory  <- successful readings and observed events
    Dispatchers        -> consumers read committed snapshots
```

FuzzyAIRuntime depends on Core, CoreUObject, Engine, GameplayTags, AIModule, NavigationSystem, GameplayAbilities and GameplayTasks. FuzzyAIEditor contains the debugger UI and tests, with Slate/SlateCore/InputCore/ToolMenus/WorkspaceMenuStructure and UnrealEd/BlueprintGraph/KismetCompiler/Projects dependencies. The plugin uses generic GAS APIs without depending on game-specific characters or attribute sets.

## Configure observations

1. Add **FuzzyAIComponent** to the enemy Blueprint.
2. For a custom collector, create a Blueprint Class derived from **FuzzyObservation**.
3. Choose its Subject and Update Policy. Related outputs share that collector's source and schedule.
4. Expand **Outputs** and add one entry per value. Select a registered Gameplay Tag key, Value Type, Change Tolerance and optional memory settings for each entry.
5. Override **Sample(Observer, Target, Store)**. Read your source, then use the matching typed store setter for each declared key. Call Invalidate(Key, Reason) if a particular value is unavailable. Omitted outputs automatically become invalid.
6. Add the sensor class to the component's **Observations** inline array. No Data Asset or extra Actor Component is needed.
7. Use Auto Start, or call Start AI after establishing sources. Stop/start applies configuration edits.

For example, after manually registering **Observation.Self.Health**, **Observation.Self.MaxHealth** and **Observation.Self.Endurance** in the project's Gameplay Tags settings, one Self Attributes observation can declare them, each a Float. A single Sample can publish all three. This does not automatically read GAS: the Blueprint chooses and reads the corresponding attributes. Use Interval while testing; Source Event requires binding actual source callbacks.

There is no editable Observation ID or primary Observation Key. The manager privately uses runtime object names to schedule sensors. Consumers read exact output keys from the selected enemy's store. Request Observation Refresh(Key) and Notify Observation Source Changed(Key) find the collector through any declared output, including before its first successful sample, and refresh all its outputs.

### Selecting keys

Keys are **FGameplayTag**, not FName text or enum values. Register project-specific keys once in **Project Settings > Gameplay Tags > Manage Gameplay Tags**, under **Observation**. Then search/select them in Outputs and Blueprint read/write/refresh pins. Output properties and key pins filter to this namespace; the runtime also checks the namespace. Selecting a registered tag does not guarantee that this enemy produces it, or that the current reading is valid. Store lookups use exact keys; selecting a parent tag does not aggregate its children.

The plugin registers the Observation root and three native sensor keys in ObservationKeys.h/.cpp: Observation.Target.Distance, Observation.Target.HasLineOfSight and Observation.Target.VisibleLocation. Self-attribute tags such as Health, MaxHealth and Endurance are project-defined: add them manually to a project tag .ini through the Gameplay Tag Manager to allow editor renaming/deletion. No self-attribute collector or GAS binding is created automatically. The Gameplay Tag *value type* remains separate from the Gameplay Tag used as the output's key.

The former native Observation.Self.Health, Observation.Self.MaxHealth and Observation.Self.Endurance declarations were removed on 2026-10-24. They are not automatically recreated in configuration. After rebuilding and restarting the editor, existing custom observations using these names need matching project-defined tags or replacement output keys. For the current OBS_SelfHealth prototype, manually adding Observation.Self.Health preserves the name already stored in its output and Set Float node. If choosing a new name (for example Observation.Self.HealthPercent), update both locations, or use Get Output Key(0) in the setter. The user's current health sample publishes Health / MaxHealth (0–1), rather than the historical raw-health example below. No Blueprint asset was edited for this native-tag removal.

Removal validation: the UE 5.7 Editor linked build and all ten observation automation groups passed on 2026-10-24, alongside the debugger drawer tests. The runtime DLL no longer contains the removed native self-tag definitions. Custom health Blueprint setup still requires the user to register its output key as described above; the production combat map was not exercised for this removal.

Each enabled collector must declare at least one output. Empty/abstract observations, missing/invalid keys, duplicate keys within/across collectors, invalid value types and invalid timing/tolerance/memory settings reject startup. **Get Configuration Errors** and the debugger show the reason. Disabled sensors are ignored. Each enemy receives independent runtime copies; templates are not modified by sampling.

Native sensors each implement **output index 0** and provide its default declaration:

| Class | Output key / type | Behavior |
| --- | --- | --- |
| UFuzzyDistanceObservation | Observation.Target.Distance / Float | Visible-target distance in centimeters. |
| UFuzzyLineOfSightObservation | Observation.Target.HasLineOfSight / Boolean | Reports supplied visibility for a selected target; performs no traces. |
| UFuzzyTargetLocationObservation | Observation.Target.VisibleLocation / Vector | Visible position, with last-successful memory enabled. |

**Get Output Key(Index)** returns a collector's configured key (empty tag for an invalid index). Native examples use index 0. Custom multi-output Blueprints may use this helper with stable output positions, or select semantic keys directly in their setter nodes. Declaring more outputs alone does not implement collection; Sample must publish their values. Keep collectors separate when their sources or update timing differ.

## Collection policies and lifecycle

| Policy | Sampling trigger |
| --- | --- |
| Interval | A shared component timer samples only due sensors. Default interval is 0.2 seconds; minimum 0.01. Missed intervals do not cause catch-up bursts. |
| Source Event | Forward source changes through a runtime sensor's Request Refresh or component Notify Observation Source Changed(Key). The latter accepts only Source Event sensors. |
| Every Frame | Enables component ticking and samples only sensors using this policy. Tick is disabled when none require it. |
| Manual | Explicit Request Observation Refresh(Key), Request Refresh or Refresh All Observations. Explicit requests work with every policy. |

All enabled sensors receive an initial sample. Relevant target/visibility/Subjects changes also refresh context-dependent sensors. A component timer checks memory expiry/housekeeping at least every 0.25 game seconds even when collection is source-driven; it does not resample Source Event sensors merely because that timer fired.

- **On Initialize:** bind source delegates using Get Observation Context.
- **On Context Changed(Previous, Current):** remove old target-specific bindings and establish new ones when required.
- **Request Refresh:** source callbacks request a managed Sample instead of writing directly to the store.
- **On Shutdown:** synchronously unbind delegates and cancel tasks/timers created by that runtime sensor. Runs on stop/restart cleanup and EndPlay.

Sample is synchronous; latent/asynchronous work must complete outside it and request a later sample. Initialization/source callbacks cannot write to the store directly. Reentrant component requests are deferred to the next game-thread tick. Get World resolves through the owning component.

## Store and change notifications

A sample publishes only its declared outputs. For a Self Attributes collector with three Float outputs:

```text
Sample(Observer, Target, Store)
    Store.SetFloat(Observation.Self.Health, Health)
    Store.SetFloat(Observation.Self.MaxHealth, MaxHealth)
    Store.SetFloat(Observation.Self.Endurance, Endurance)
```

Select keys with the Gameplay Tag picker; the labels above are not string arguments. Every declared output establishes an invalid record even before its first success. Unpublished outputs become unavailable on every sample. Undeclared writes are rejected, mismatched types become invalid with a diagnostic, and competing writers invalidate the key. Float/vector non-finite values are invalidated. Zero, false, world origin and an intentional null object can be valid readings. Per-output settings control tolerance and memory independently.

Managed writes are staged; getters expose committed data. A refresh commits all sampled outputs before updating memory and broadcasting notifications. Timestamps record Last Attempt, Last Success and Last Change in world game seconds (-1 means unavailable). Successful unchanged readings renew success time without notifying. Float/vector change tolerance compares against the last notified value, so small accumulated changes eventually notify.

Use **Get Observation Store** for typed Get Float/Integer/Boolean/Vector/Object/GameplayTag, Try Get Observation, Get Snapshot and Get Write Errors. Typed getter success requires a valid record with the requested type. Try Get Observation returning true only means the key exists; inspect Result.IsValid. Getters return cached data and never sample again.

| Dispatcher | Information sent |
| --- | --- |
| On Observation Changed | Key, Previous, Current and Had Previous for one meaningful change. Previous is the previous sampled record; Had Previous is false on the initial sample. |
| On Observations Changed | Changed Keys, once for a refresh batch. |
| On Memory Changed | Keys with remembered-value/availability changes, expiry, eviction or clearing. Timestamp-only renewals stay quiet. |
| On Observed Event Recorded | Each recorded event occurrence, including identical repeated events. |

Binding a listener does not automatically watch the original source variable. Source-event integration must request collection; the outgoing dispatcher then notifies consumers after the store has updated. Listeners attached after startup should query the initial snapshot because events are not replayed.

## Visibility and local memory

Set Target selects an actor and resets visibility on identity changes. Feed sight through **Update Target Sighting(Target, Visible)**, or Set Target followed by Set Target Visibility. Sight loss for another target is ignored. When using AI Perception, forward Sight-sense updates only; hearing/damage must not grant visibility. Continue interval/frame sampling for position while visible because sight transitions alone do not continuously track movement.

Requires Visible Target blocks sampling before Blueprint executes when sight is unavailable. Target subjects and visibility-gated sensors are context-dependent automatically; enable Uses Target Context for Custom sensors using Target/Subjects. Custom sources must honor the enemy's knowledge policy.

Remember Last Successful retains successful readings separately from current validity. Memory is keyed by observer, output key and target identity. Failed samples invalidate current knowledge without overwriting the last success. Memory Duration is measured from the last success; zero disables time expiry. Successful unchanged samples renew expiry.

**Get Target Location Knowledge** defaults to Observation.Target.VisibleLocation (an empty Location Key uses this default) and returns explicit availability flags for active and last-seen positions, plus last-seen time/age. Losing sight invalidates current position; hidden movement never updates remembered position. Explicitly query an old target with Try Get Remembered Observation when needed. Destroyed targets and expired entries are pruned. Memory capacity defaults to 128 and evicts the least recently successfully observed record.

**Record Observed Event** stores timestamped occurrences, with an optional typed payload. Only forward events this enemy is allowed to know. Max Observed Events defaults to 128; max age defaults to 30 seconds (zero disables age expiry). The component preserves occurrence time for deferred events.

Stop AI stops sampling but retains cached records and their timestamps. Active location is unavailable while stopped. Restart starts a fresh store/memory session. Clear Memory removes remembered facts/events; future successful samples can remember facts again.

Auto Start and Server Only default to true. Caches/dispatchers are local and not replicated. The integration must provide any desired client debugging/replication path.

## Quick verification

1. Add the three native sensors to one enemy's Observations array.
2. Feed Update Target Sighting(Target, true) for a target 250 cm away. Observation.Target.Distance should be a valid Float of 250; sight should be valid true.
3. Move the visible target and refresh. Active and remembered positions should update.
4. Feed sight false, then move the target again. Current distance/location become unavailable, sight is valid false, and the remembered location stays at the last visible point until expiry.
5. Reacquire or switch targets and confirm their memories stay distinct.
6. Add a Blueprint self-health sensor and forward its source callback; confirm updates without enabling component tick.

No production perception/GAS wiring, Gameplay Ability or Gameplay Effect is supplied by the plugin. The default observation key tags are registered; integrate gameplay sources in the consuming project.

## Automation and validation

Build GameAnimationSampleEditor for UE 5.7 and run **FuzzyAI.Observation** in Session Frontend > Automation with the Engine filter. Ten groups cover Sampling, Memory, UpdatePolicies, ComponentIntegration, TypedStore, DeclaredOutputs, InstancedSensors, BlueprintComponent, BlueprintSensorSample and InlineOnlyAPI. Tests use transient worlds/Blueprints and save no Content packages. InlineOnlyAPI checks that the removed asset API, editable ID and primary key are absent; the current user-authored inline OBS_SelfHealth Blueprint is allowed.

Run **FuzzyAI.Debugger** for ReadOnlySnapshots, DiscoveryAndLifetime, WindowSelection and DecisionLayers. They cover passive reads, lifetime, knowledge, layer traces, numeric provenance, bounds and Slate layout. Native tab/screenshot checks require rendering. **FuzzyAI.Utility** adds seven scoring, interpretation, lifecycle, GAS, action-tag and authoring groups. **FuzzyAI.** runs all twenty-one groups. See [Layer debugger](../../Design/AI/Utility/Debugger.md) and [action tag migration](../../Design/AI/Utility/ActionTagMigration/README.md) for validation.

For rendered layout verification, run WindowSelection through UnrealEditor-Cmd with `-RenderOffscreen -FuzzyAIDebuggerCapture` and omit `-NullRHI`. It captures visible/hidden target fixtures, the open/closed enemy drawer, collapsed/reexpanded panels, minimum panel resizing, and narrow/short layouts to `Saved/Automation/FuzzyAIDebugger/Screenshots/`. It checks that the drawer does not resize/move observations, Escape closes it, short tabs preserve minimum panel heights with scrolling, narrow tables retain horizontal scrolling, collapsed panels free space, refresh retains selection/state, and native tabs reopen. These fixtures do not save assets or modify production enemies.

Debugger validation (2026-10-23): the UE 5.7 Editor target builds successfully. All twelve groups passed with zero test warnings/errors both in the headless suite and in the final rendered suite, including visible/hidden screenshots and native tab open/close/reopen. Final report: `Saved/Automation/FuzzyAIDebuggerFinal/index.json`; log: `Saved/Logs/FuzzyAIDebuggerFinal.log`. The fixtures verify transient enemies; production enemy wiring and the combat map were not modified.

Collapsible-panel update (2026-10-23): UE 5.7 Editor build passed. All three debugger groups passed with zero test warnings/errors in a rendered offscreen run, including bottom-picker placement, space recovery, selection/data retention, collapse state after refresh, reexpansion, a narrow layout and native tab reopening. Screenshots were visually inspected. Report: `Saved/Automation/FuzzyAIDebuggerPanels/index.json`; log: `Saved/Logs/FuzzyAIDebuggerPanels.log`.

Enemy drawer and minimum-size update (2026-10-24): changed **SFuzzyAIDebugger** and its existing **FFuzzyAIDebuggerWidgetTest**. The UE 5.7 Editor linked build passed. All thirteen FuzzyAI test groups passed with zero test warnings/errors in `Saved/Automation/FuzzyAIDrawerVerified/index.json`; log: `Saved/Logs/FuzzyAIDrawerVerified.log`. Rendered screenshots were inspected for the open/closed drawer, a forced-small splitter panel, and a 780x440 tab scrolled to each observation panel. Checks cover unchanged observation geometry while opening the drawer, Escape dismissal, minimum panel heights, both scroll directions, collapsed/reexpanded panels, selection/data retention and tab reopening. No Content, Blueprint setup, Gameplay Abilities or Gameplay Effects changed for this UI update.

```powershell
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Build/BatchFiles/Build.bat' GameAnimationSampleEditor Win64 Development '-Project=D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' -WaitMutex -NoHotReloadFromIDE
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Binaries/Win64/UnrealEditor-Cmd.exe' 'D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' /Engine/Maps/Entry '-ExecCmds=Automation RunTests FuzzyAI.Observation' '-TestExit=Automation Test Queue Empty' -unattended -nop4 -NullRHI -nosound -DisablePlugins=Aura '-ReportExportPath=D:/Unreal Projects/GameAnimationSample/Saved/Automation/FuzzyAIInlineOnly'
```

The retired asset-reader path and its health test were removed on 2026-10-23. [Removal details and verified backup](../../Design/AI/Observation/SharedChatMigration.md) record the change. UE 5.7 Editor build/UHT and all nine inline observation test groups passed with zero test warnings/errors. Report: Saved/Automation/FuzzyAIInlineOnly/index.json; log: Saved/Logs/FuzzyAIInlineOnly.log. Live combat-map PIE and packaging remain separate integration checks.

The runtime module also passed Game-target compilation using `GameAnimationSample Win64 Development -Module=FuzzyAIRuntime -NoLink`. This checks the non-editor compilation path; full game linkage/cooking/packaging was not performed.

## Updating existing observation Blueprints

This schema changes Blueprint pin types: observation keys, changed-key arrays and record keys are Gameplay Tags. Refresh affected nodes and select registered tags. Replace getters of the removed Observation Key property with **Get Output Key(0)**, or select the intended tag directly. Replace sensor-level tolerance/memory settings with settings on each Outputs entry. Declare every extra key previously written dynamically. Rebind listeners if their old Name/Name Array pins cannot reconnect to Gameplay Tag/Gameplay Tag Array pins. Observed-event EventKey remains a separate FName API.

The project's source and enemy assets were checkpointed before this change at Design/AI/Observation/Backups/FuzzyAI-before-tagged-outputs-20261023.zip. BeforeTaggedOutputs.json records the previous output defaults. The current OBS_SelfHealth prototype was migrated through a one-time editor pass: its old getter is now Get Output Key(0), its single output is Observation.Self.Health, and it compiled before saving. The helper is archived as TaggedOutputsMigration.cpp outside the plugin; it is not compiled into the final build. TaggedOutputsMigration.txt records the result. No old observation runtime or compatibility fields are retained in the plugin.

Tagged-output validation (2026-10-23): UE 5.7 Editor build/UHT passed. Runtime Game-target compilation passed with `-Module=FuzzyAIRuntime -NoLink` (full game linkage/cooking/packaging not performed). All **13** observation/debugger groups passed in a rendered offscreen run with **zero test warnings/errors**, including declared-output validation, independent tolerance/memory policies, tag-picker metadata, Blueprint multi-output sampling and debugger tab reopening. Report: `Saved/Automation/FuzzyAITaggedOutputs/index.json`; log: `Saved/Logs/FuzzyAITaggedOutputs.log`. Visible/hidden screenshots were inspected. Test-only tag fixtures live under Tests/Tags and are loaded/unloaded only by automation; they are not native editor-module tags or normal gameplay keys.

Saved-project verification loaded Level_Gym, compiled OBS_SelfHealth, BP_EnemyCombatBase, BP_CombatEnemyBase, BP_DummyEnemy_Attacking and BP_AIController, and checked the base/two placed enemies' declared outputs. A transient native CombatCharacter with an initialized combat attribute set let the migrated health Blueprint publish a valid **100** under Observation.Self.Health. No Content was saved by this verification. Report: `Design/AI/Observation/TaggedOutputsVerification.json`; reproducible script: `Design/AI/Observation/VerifyTaggedOutputs.py`; log: `Saved/Logs/FuzzyAIOutputProjectVerification.log`.

The observation-specific assertions passed, but this full-map commandlet exited with code 1 because it reproduced two existing animation Chooser context errors (CHT_CMCCharacterAnimations expects SandboxCharacter_CMC_ABP_C and receives ABP_CombatCharacter_CMC_C). It also reported the existing eight Action.Dodge.* missing tags and the default GAS GameplayCueNotifyPaths warning. These are separate from the schema migration; full combat-map PIE was not verified.

Classes/types changed for the output schema: **UFuzzyAIComponent**, **UFuzzyObservation**, **UFuzzyObservationManager**, **UFuzzyObservationStore**, **UFuzzyAIObservationMemory**, **FFuzzyAIObservationOutput**, **FFuzzyAIObservationRecord**, **UFuzzyDistanceObservation**, **UFuzzyLineOfSightObservation**, **UFuzzyTargetLocationObservation** and **FFuzzyAIDebugModel**. ObservationKeys.h/.cpp adds the six default value-key tags in NKFuzzyAI::ObservationKeys. The existing observation/debugger tests were updated; FuzzyAIEditor adds the Projects dependency for scoped test fixtures. The debugger's existing collapsible layout was preserved. The only changed Content asset is the current inline **OBS_SelfHealth** Blueprint; no Gameplay Abilities, Gameplay Effects, team configuration or map asset was modified.
