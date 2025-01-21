#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CompendiumButtonData.h"
#include "ArchiveCompendiumTooltipWidget.generated.h"

class UCoreStoryLevelsSelectorWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveCompendiumTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TomeTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* DescriptionTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreStoryLevelsSelectorWidget* StoryLevelsSelector;

public:
	UFUNCTION()
	void SetTooltipData(const FCompendiumButtonData& tooltipViewData);

	UFUNCTION()
	void Reset();

public:
	UArchiveCompendiumTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveCompendiumTooltipWidget) { return 0; }
