#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EArchivesStoryLevelStatus.h"
#include "CoreStoryLevelsSelectorWidget.generated.h"

class UCoreInputSwitcherWidget;
class UCoreStoryLevelButtonWidget;
class UGridPanel;
class UArchiveStoryLevelViewData;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoryLevelsSelectorWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsReadOnly;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreStoryLevelButtonWidget> CoreStoryLevelButtonWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* LevelButtonsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PreviousLevelInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* NextLevelInputSwitcher;

private:
	UPROPERTY(Transient)
	TArray<UArchiveStoryLevelViewData*> _levelButtonsData;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool playAnimation);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLevelStatus(const int32 level, const EArchivesStoryLevelStatus status);

protected:
	UFUNCTION(BlueprintCallable)
	void SetUpInteractionMode();

public:
	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<UArchiveStoryLevelViewData*>& levelbuttonsData);

private:
	UFUNCTION()
	void OnStoryLevelUnlockedAnimation();

public:
	UFUNCTION(BlueprintPure)
	UCoreStoryLevelButtonWidget* GetStoryLevelButton(int32 level) const;

protected:
	UFUNCTION(BlueprintCallable)
	void AdaptButtonsPoolToData(int32 dataNumber);

public:
	UCoreStoryLevelsSelectorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoryLevelsSelectorWidget) { return 0; }
