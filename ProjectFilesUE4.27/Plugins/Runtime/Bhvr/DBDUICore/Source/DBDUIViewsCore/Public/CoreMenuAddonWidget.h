#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuAddonWidget.generated.h"

class UMenuAddonViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuAddonWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuAddonTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetMenuAddonData(const UMenuAddonViewData* data);

public:
	UCoreMenuAddonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuAddonWidget) { return 0; }
