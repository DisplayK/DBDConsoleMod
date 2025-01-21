#pragma once

#include "CoreMinimal.h"
#include "PowerBundleViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CorePowerBundleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePowerBundleWidget : public UCoreBaseUserWidget, public IPowerBundleViewInterface
{
	GENERATED_BODY()

public:
	UCorePowerBundleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePowerBundleWidget) { return 0; }
