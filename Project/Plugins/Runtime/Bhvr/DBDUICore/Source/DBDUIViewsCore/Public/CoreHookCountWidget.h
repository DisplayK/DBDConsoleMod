#pragma once

#include "CoreMinimal.h"
#include "HookCountViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreHookCountWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHookCountWidget : public UCoreBaseHudWidget, public IHookCountViewInterface
{
	GENERATED_BODY()

public:
	UCoreHookCountWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHookCountWidget) { return 0; }
