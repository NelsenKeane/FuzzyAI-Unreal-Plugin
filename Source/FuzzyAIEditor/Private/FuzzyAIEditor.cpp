#include "Modules/ModuleManager.h"
#include "Debugger/FuzzyAIDebugger.h"

class FFuzzyAIEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        Debugger.Register();
    }

    virtual void ShutdownModule() override
    {
        Debugger.Unregister();
    }

private:
    FFuzzyAIDebugger Debugger;
};

IMPLEMENT_MODULE(FFuzzyAIEditorModule, FuzzyAIEditor)
