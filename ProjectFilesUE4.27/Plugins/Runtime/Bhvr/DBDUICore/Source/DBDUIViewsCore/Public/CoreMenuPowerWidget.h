#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuPowerWidget.generated.h"

class UMenuPowerViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuPowerWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuPowerTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetMenuPowerData(const UMenuPowerViewData* data);

public:
	UCoreMenuPowerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuPowerWidget) { return 0; }
