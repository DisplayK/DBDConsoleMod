#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "RankTooltipWidget.generated.h"

class UUMGPlayerRankInfo;
class UTextBlock;
class UGridPanel;

UCLASS(Abstract, EditInlineNew)
class URankTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RankInfoLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ResetInfoLabel;

	UPROPERTY(meta=(BindWidgetOptional))
	UGridPanel* RankInfoSlotsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPlayerRankInfo* SurvivorRankInfoWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPlayerRankInfo* KillerRankInfoWidget;

public:
	URankTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const URankTooltipWidget) { return 0; }
