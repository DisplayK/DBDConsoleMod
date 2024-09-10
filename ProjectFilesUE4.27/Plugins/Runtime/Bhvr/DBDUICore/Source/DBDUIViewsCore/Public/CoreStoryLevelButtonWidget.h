#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "LevelUnockedAnimationDoneDelegate.h"
#include "ERemainingTimeFormat.h"
#include "EArchivesStoryLevelStatus.h"
#include "CoreStoryLevelButtonWidget.generated.h"

class UArchiveStoryLevelViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoryLevelButtonWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FLevelUnockedAnimationDoneDelegate _levelUnlockedAnimationDoneDelegate;

	UPROPERTY(BlueprintReadOnly)
	FText _tooltipText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	ERemainingTimeFormat _lockedLevelTimeFormat;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateVisual(const UArchiveStoryLevelViewData* viewData, bool newlyUnlocked);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly);

	UFUNCTION(BlueprintCallable)
	void SetData(const UArchiveStoryLevelViewData* viewData, bool isSelectorReadOnly);

	UFUNCTION(BlueprintPure)
	int32 GetLevel() const;

public:
	UCoreStoryLevelButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoryLevelButtonWidget) { return 0; }
