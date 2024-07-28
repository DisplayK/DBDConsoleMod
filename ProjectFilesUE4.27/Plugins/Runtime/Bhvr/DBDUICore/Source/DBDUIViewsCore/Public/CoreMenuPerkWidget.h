#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuPerkWidget.generated.h"

class UMenuPerkViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuPerkWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuPerkTooltipData(const FLoadoutTooltipData& tooltipData);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetMenuPerkLevel(int32 level);

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuPerkData(const UMenuPerkViewData* data);

public:
	UCoreMenuPerkWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuPerkWidget) { return 0; }
