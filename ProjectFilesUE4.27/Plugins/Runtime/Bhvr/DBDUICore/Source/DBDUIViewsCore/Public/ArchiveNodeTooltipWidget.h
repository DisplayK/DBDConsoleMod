#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EArchiveNodeType.h"
#include "Templates/SubclassOf.h"
#include "ArchiveNodeViewData.h"
#include "ArchiveNodeTooltipWidget.generated.h"

class UDBDImage;
class UVerticalBox;
class UCoreArchiveObjectiveWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;
class UCoreCurrencyForTooltipsWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveNodeTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* BackgroundIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* NodeTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* NodeDescriptionRTB;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreArchiveObjectiveWidget> ObjectiveWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* ArchiveObjectivesContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreCurrencyForTooltipsWidget* ProgressionRewardWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreCurrencyForTooltipsWidget* CurrencyRewardWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* VignetteRTB;

public:
	UFUNCTION()
	void SetTooltipData(const FArchiveNodeViewData& nodeViewData);

	UFUNCTION(BlueprintImplementableEvent)
	void SetNodeType(EArchiveNodeType type);

	UFUNCTION()
	void Reset();

public:
	UArchiveNodeTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveNodeTooltipWidget) { return 0; }
