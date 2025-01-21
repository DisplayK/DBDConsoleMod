#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "OnboardingTutorialSubPresenter.generated.h"

class IOnboardingTutorialViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UOnboardingTutorialSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget;

private:
	UFUNCTION()
	void OnSelectTutorial(const FString& stepId, const FString& tutorialId);

public:
	UOnboardingTutorialSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingTutorialSubPresenter) { return 0; }
