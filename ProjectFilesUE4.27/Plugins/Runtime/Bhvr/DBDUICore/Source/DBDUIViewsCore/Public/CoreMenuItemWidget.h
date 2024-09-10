#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuItemWidget.generated.h"

class UMenuItemViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuItemWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuItemTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetMenuItemData(const UMenuItemViewData* data);

public:
	UCoreMenuItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuItemWidget) { return 0; }
