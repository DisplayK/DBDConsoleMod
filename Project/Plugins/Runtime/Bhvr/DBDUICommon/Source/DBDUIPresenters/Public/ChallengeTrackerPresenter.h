#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ChallengeTrackerPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class UChallengeTrackerPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ChallengeTrackerWidgetClass;

private:
	UPROPERTY(EditInstanceOnly, NoClear)
	float ReadingTimeDelaySec;

private:
	UFUNCTION()
	void OnWidgetProgressingDone();

	UFUNCTION()
	void OnWidgetOpeningDone();

	UFUNCTION()
	void OnWidgetClosingDone();

	UFUNCTION()
	void OnReadingTimeDelayDone();

	UFUNCTION()
	void OnQuestEventRepetitionValueChanged(int32 value, const FString& questEventIdTracked);

	UFUNCTION()
	void BindToQuestRepetitionEvents();

public:
	UChallengeTrackerPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengeTrackerPresenter) { return 0; }
