#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuOfferingWidget.generated.h"

class UMenuOfferingViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuOfferingWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuOfferingTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetMenuOfferingData(const UMenuOfferingViewData* data);

public:
	UCoreMenuOfferingWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuOfferingWidget) { return 0; }
