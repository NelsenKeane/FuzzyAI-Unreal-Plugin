# FuzzyAI
Core component, inline observation layer and editor debugger for enemy AI.

Add one **FuzzyAIComponent** to an enemy. Configure its **Observations** array with inline sensor objects. Each enemy receives independent runtime sensor instances, a current-value store and local memory. No additional Actor Components are required.

Core and working observations are implemented, with a read-only editor window for inspecting them. Further AI layers will be added as needed.

## Reading order and file responsibilities

Every source/build/test file starts with a two-line purpose note. Read each header before its matching implementation under Private/. Type-only headers have no implementation file.

The component, observation types/classes, native sensors, debugger, tests and build rules have named folding regions. Expand or collapse them using the gutter controls in Rider or Visual Studio. C++ uses `#pragma region` / `#pragma endregion`; the C# build rules use `#region` / `#endregion`. These markers organize the editor view without changing runtime behavior. The tiny forwarding header and runtime module registration file remain ungrouped.

In `Core/FuzzyAIComponent.h`, **Scheduling and Deferred Actions** contains the private `DeferredActions` array. It holds callable operations, not observation records. In the implementation's **Deferred Actions** region, `Defer()` queues requests received while the component is already processing and schedules a next-tick timer. The callback moves the queued work into a local array and executes it after the current update. This prevents callbacks from modifying the observation layer during sampling or notifications. `StopAI()` and `EndPlay()` clear the timer and discard pending actions with `DeferredActions.Reset()`.

| Order | File | Purpose |
| --- | --- | --- |
| 1 | [Core/FuzzyAIComponent.h](Source/FuzzyAIRuntime/Public/Core/FuzzyAIComponent.h) | Public configuration, target/sight inputs, refresh requests, cached getters and dispatchers. Skim this, then return to its implementation at step 8. |
| 2 | [ObservationTypes.h](Source/FuzzyAIRuntime/Public/Observation/ObservationTypes.h) + .cpp | Actor context, typed values, validity and pure result construction/comparison helpers. |
| 3 | [ObservationRuntimeTypes.h](Source/FuzzyAIRuntime/Public/Observation/ObservationRuntimeTypes.h) | Update policies, result change/memory settings, timestamped records, remembered facts, events and target-location knowledge. |
| 4 | [FuzzyObservation.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservation.h) + .cpp, then [Sensors/FuzzyStandardObservations.h](Source/FuzzyAIRuntime/Public/Observation/Sensors/FuzzyStandardObservations.h) + .cpp | Sensor settings/lifecycle and concrete distance, sight-state and location examples. |
| 5 | [FuzzyObservationStore.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservationStore.h) + .cpp | Current typed readings, managed write transactions, output ownership, timestamps and change detection. |
| 6 | [FuzzyObservationManager.h](Source/FuzzyAIRuntime/Public/Observation/FuzzyObservationManager.h) + .cpp | Configuration checks, per-enemy sensor copies, due-sensor selection, context updates and sampling. |
| 7 | [ObservationMemory.h](Source/FuzzyAIRuntime/Public/Observation/ObservationMemory.h) + .cpp | Last-successful facts, individual events, identity, expiry and bounded capacity. |
| 8 | [Core/FuzzyAIComponent.cpp](Source/FuzzyAIRuntime/Private/Core/FuzzyAIComponent.cpp) | Connect the pieces: StartAI -> RefreshAllObservations -> ProcessRefresh, then source requests, timers/tick, target changes and StopAI/EndPlay. |
| 9 | [FuzzyAIObservationTests.cpp](Source/FuzzyAIEditor/Private/Tests/FuzzyAIObservationTests.cpp) | Executable examples for sampling, policies, memory, typed storage, separate enemies, Blueprint sensors and the inline-only API. |

Read module/build infrastructure last: [runtime startup](Source/FuzzyAIRuntime/Private/FuzzyAIRuntime.cpp), [editor startup](Source/FuzzyAIEditor/Private/FuzzyAIEditor.cpp), [runtime dependencies](Source/FuzzyAIRuntime/FuzzyAIRuntime.Build.cs) and [editor dependencies](Source/FuzzyAIEditor/FuzzyAIEditor.Build.cs). The [forwarding component header](Source/FuzzyAIRuntime/Public/FuzzyAIComponent.h) includes Core/FuzzyAIComponent.h.

For the debugger, read [FuzzyAIDebugModel.h](Source/FuzzyAIEditor/Private/Debugger/FuzzyAIDebugModel.h) and its implementation first (world discovery and display snapshots), then [SFuzzyAIDebugger.h](Source/FuzzyAIEditor/Private/Debugger/SFuzzyAIDebugger.h) and its implementation (Slate layout, selection and display refresh). `FFuzzyAIEditorModule` in editor startup registers the tab and Window menu entry. [FuzzyAIDebuggerTests.cpp](Source/FuzzyAIEditor/Private/Tests/FuzzyAIDebuggerTests.cpp) contains transient-world examples.

## FuzzyAI editor debugger

Open **Window > FuzzyAI Debugger**. The tab can be docked or floated like other Unreal panels.

1. Start Play or Simulate with an enemy that has FuzzyAIComponent. No additional component or Blueprint binding is needed for the debugger.
2. Select the enemy/component in the left panel. Search by actor, component or world name. **Inspect selected actor** uses a selected actor in the listed world; it does not remap an editor actor to a PIE copy.
3. Read the component status, current target, sensor counts, memory limits and any configuration/store-write diagnostics above the tables.

| Panel | What it shows | Age means |
| --- | --- | --- |
| Observation Store | Committed keys, type, value, validity, target/subject, failure reason or success/change ages | Time since the last sampling attempt |
| Remembered Facts | Successful remembered values, their target identity, and remaining time before expiry | Time since the last successful observation |
| Observed Events | Separate event occurrences, newest first, with optional payload, source and target | Time since the event was received |

Hover over a cell to read its full text. Drag panel splitters and table column dividers to resize them. An invalid current reading is displayed as **Unavailable**, without exposing its old value; the old successful value belongs in Remembered Facts. A valid false, zero, origin vector or null object remains a valid reading. Events can be recorded without a payload.

**Live updates** refreshes the selected enemy's display every 0.25 seconds and discovers added/removed actors once per second, only while the debugger widget exists. Uncheck it to freeze the displayed snapshot; **Refresh view** reads it once. Destroyed selections are cleared even when live updates are disabled. Display refresh never calls Sample, starts/stops AI, clears memory or modifies a target. World game time drives ages and expiry, so those ages pause when simulation time pauses. Stopped AI keeps its cached readings and is labelled accordingly.

Before play, the picker lists components in the editor world, which normally have no runtime readings. During play, it lists PIE/game instances instead of their editor copies. Each entry includes its world and standalone/server/client role. The debugger can inspect only worlds inside this editor process: use single-process multiplayer PIE to inspect multiple instances. Server Only defaults to true, and the runtime cache is not replicated, so a client entry can legitimately have no data. External servers and separate game processes are not connected to this window.

The debugger lives entirely in **FuzzyAIEditor**. The runtime component, sensor behavior, Content assets, production enemy Blueprints, Gameplay Abilities/Effects and gameplay tags are unchanged.

```text
Enemy Actor
  FuzzyAIComponent
    ObservationManager -> per-enemy sensors -> ObservationStore
    ObservationMemory  <- successful readings and observed events
    Dispatchers        -> consumers read committed snapshots
```

FuzzyAIRuntime depends on Core, CoreUObject, Engine and GameplayTags. FuzzyAIEditor contains the debugger UI and tests, with Slate/SlateCore/InputCore/ToolMenus/WorkspaceMenuStructure and UnrealEd/BlueprintGraph/KismetCompiler dependencies. Neither module adds a game-specific combat/GAS dependency.

## Configure observations

1. Add **FuzzyAIComponent** to the enemy Blueprint.
2. For a custom sensor, create a Blueprint Class derived from **FuzzyObservation**.
3. Set a primary Observation Key, Expected Value Type, Subject and Update Policy. For health, use Self.Health, Float, Self and Source Event (or Interval while testing).
4. Override **Sample(Observer, Target, Store)**. Read the allowed source and call a typed store setter, such as **Set Float(Observation Key, Health)**. If unavailable, call **Invalidate(Observation Key, Reason)**.
5. Add the sensor type to the component's **Observations** inline array and expand its settings. No Data Asset instance is needed.
6. Use Auto Start, or disable it and call Start AI after establishing source connections. Stop/start applies configuration edits.

The C++ array is ObservationInstances. The manager duplicates enabled templates into component-owned runtime sensors; live state does not modify the configured template. IDs fall back from Observation ID to primary key to instance name. IDs and declared primary output keys must be unique. Empty/abstract entries, duplicate IDs/outputs and invalid timing/tolerance/memory settings reject startup; **Get Configuration Errors** exposes the reason. Disabled sensors are not instantiated.

Native sensors available directly in the array:

| Class | Output | Behavior |
| --- | --- | --- |
| UFuzzyDistanceObservation | Target.Distance / Float | Visible-target distance in centimeters. |
| UFuzzyLineOfSightObservation | Target.HasLineOfSight / Boolean | Reports supplied visibility for a selected target; performs no traces. |
| UFuzzyTargetLocationObservation | Target.VisibleLocation / Vector | Visible position, with last-successful memory enabled. |

The component does not bind GAS or AI Perception automatically. Game-specific sensors/adapters choose their allowed sources.

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

A sample can publish multiple independent typed keys:

```text
Sample(Observer, Target, Store)
    Store.SetFloat("Self.Health", Health)
    Store.SetFloat("Self.MaxHealth", MaxHealth)
    Store.SetBoolean("Self.IsAlive", Health > 0)
```

The optional primary key establishes an invalid record before the first successful read and validates the expected type. Additional keys are discovered when published. Previously published outputs omitted by a later sample become invalid. Competing writers invalidate the key and report a diagnostic. Float/vector non-finite values are invalidated. Zero, false, world origin and an intentional null object can all be valid values.

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

**Get Target Location Knowledge** defaults to Target.VisibleLocation and returns explicit availability flags for active and last-seen positions, plus last-seen time/age. Losing sight invalidates current position; hidden movement never updates remembered position. Explicitly query an old target with Try Get Remembered Observation when needed. Destroyed targets and expired entries are pruned. Memory capacity defaults to 128 and evicts the least recently successfully observed record.

**Record Observed Event** stores timestamped occurrences, with an optional typed payload. Only forward events this enemy is allowed to know. Max Observed Events defaults to 128; max age defaults to 30 seconds (zero disables age expiry). The component preserves occurrence time for deferred events.

Stop AI stops sampling but retains cached records and their timestamps. Active location is unavailable while stopped. Restart starts a fresh store/memory session. Clear Memory removes remembered facts/events; future successful samples can remember facts again.

Auto Start and Server Only default to true. Caches/dispatchers are local and not replicated. The integration must provide any desired client debugging/replication path.

## Quick verification

1. Add the three native sensors to one enemy's Observations array.
2. Feed Update Target Sighting(Target, true) for a target 250 cm away. Target.Distance should be a valid Float of 250; sight should be valid true.
3. Move the visible target and refresh. Active and remembered positions should update.
4. Feed sight false, then move the target again. Current distance/location become unavailable, sight is valid false, and the remembered location stays at the last visible point until expiry.
5. Reacquire or switch targets and confirm their memories stay distinct.
6. Add a Blueprint self-health sensor and forward its source callback; confirm updates without enabling component tick.

No production enemy Blueprint wiring, Gameplay Ability, Gameplay Effect or gameplay tag is supplied by the plugin. Integrate those sources in the consuming project.

## Automation and validation

Build GameAnimationSampleEditor for UE 5.7 and run **FuzzyAI.Observation** in Session Frontend > Automation with the Engine filter. Nine groups cover Sampling, Memory, UpdatePolicies, ComponentIntegration, TypedStore, InstancedSensors, BlueprintComponent, BlueprintSensorSample and InlineOnlyAPI. Tests use transient worlds/Blueprints and save no Content packages. InlineOnlyAPI checks that the removed asset API and health test package are absent.

Run **FuzzyAI.Debugger** for the three debugger groups: ReadOnlySnapshots, DiscoveryAndLifetime and WindowSelection. They cover current-versus-remembered location after sight loss, passive reads, optional/repeated events, stopped AI, explicit world discovery, separate enemies, destroyed selections, formatting and Slate selection. Native tab open/close/reopen requires a rendering RHI and is omitted under NullRHI. Use **FuzzyAI.** to run all twelve groups together.

For rendered layout verification, run WindowSelection through UnrealEditor-Cmd with `-RenderOffscreen -FuzzyAIDebuggerCapture` and omit `-NullRHI`. It captures visible/hidden target fixtures to `Saved/Automation/FuzzyAIDebugger/Screenshots/VisibleTarget.png` and `HiddenTarget.png`, and checks native tab reopening. These fixtures do not save assets or modify production enemies.

Debugger validation (2026-10-23): the UE 5.7 Editor target builds successfully. All twelve groups passed with zero test warnings/errors both in the headless suite and in the final rendered suite, including visible/hidden screenshots and native tab open/close/reopen. Final report: `Saved/Automation/FuzzyAIDebuggerFinal/index.json`; log: `Saved/Logs/FuzzyAIDebuggerFinal.log`. The fixtures verify transient enemies; production enemy wiring and the combat map were not modified.

```powershell
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Build/BatchFiles/Build.bat' GameAnimationSampleEditor Win64 Development '-Project=D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' -WaitMutex -NoHotReloadFromIDE
& 'C:/Program Files/Epic Games/UE_5.7/Engine/Binaries/Win64/UnrealEditor-Cmd.exe' 'D:/Unreal Projects/GameAnimationSample/GameAnimationSample.uproject' /Engine/Maps/Entry '-ExecCmds=Automation RunTests FuzzyAI.Observation' '-TestExit=Automation Test Queue Empty' -unattended -nop4 -NullRHI -nosound -DisablePlugins=Aura '-ReportExportPath=D:/Unreal Projects/GameAnimationSample/Saved/Automation/FuzzyAIInlineOnly'
```

The retired asset-reader path and its health test were removed on 2026-10-23. [Removal details and verified backup](../../Design/AI/Observation/SharedChatMigration.md) record the change. UE 5.7 Editor build/UHT and all nine inline observation test groups passed with zero test warnings/errors. Report: Saved/Automation/FuzzyAIInlineOnly/index.json; log: Saved/Logs/FuzzyAIInlineOnly.log. Live combat-map PIE and packaging remain separate integration checks.

The runtime module also passed Game-target compilation using `GameAnimationSample Win64 Development -Module=FuzzyAIRuntime -NoLink`. This checks the non-editor compilation path; full game linkage/cooking/packaging was not performed.
