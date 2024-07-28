#pragma once

#include "CoreMinimal.h"
#include "EThemeColorId.h"
#include "StartSequenceFadeOutCompleted.h"
#include "EEasingType.h"
#include "StartSequenceViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "UObject/NoExportTypes.h"
#include "CoreStartSequenceWidget.generated.h"

class UDBDTextBlock;
class UImage;
class UUITweenInstance;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStartSequenceWidget : public UCoreBaseHudWidget, public IStartSequenceViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FadeInDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EEasingType FadeInEasing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EEasingType FadeOutEasing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<EThemeColorId, FLinearColor> BorderColors;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor DefaultColor;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* ThemeNameTextfield;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* SeparatorImage;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* MapNameTextfield;

private:
	UPROPERTY()
	FStartSequenceFadeOutCompleted StartSequenceFadeOutDelegate;

private:
	UFUNCTION()
	void OnHideStartSequenceComplete(UUITweenInstance* tween);

public:
	UCoreStartSequenceWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStartSequenceWidget) { return 0; }
