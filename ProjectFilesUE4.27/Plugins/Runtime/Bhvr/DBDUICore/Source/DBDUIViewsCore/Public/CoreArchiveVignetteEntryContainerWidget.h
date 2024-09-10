#pragma once

#include "CoreMinimal.h"
#include "CoreTabContainerWidget.h"
#include "EEasingType.h"
#include "CoreArchiveVignetteEntryContainerWidget.generated.h"

class UProgressBar;
class UUITweenInstance;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteEntryContainerWidget : public UCoreTabContainerWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* JournalProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType AnimationEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressAnimationDuration;

public:
	UFUNCTION()
	void OnUnlockProgress(UUITweenInstance* tween);

	UFUNCTION()
	void OnUnlockComplete(UUITweenInstance* tween);

public:
	UCoreArchiveVignetteEntryContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteEntryContainerWidget) { return 0; }
