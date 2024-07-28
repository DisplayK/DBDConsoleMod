#pragma once

#include "CoreMinimal.h"
#include "EOnboardingMenuState.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "OnboardingMenuPresenter.generated.h"

class UUserWidget;
class UOnboardingTutorialSubPresenter;
class UGameManualSubPresenter;
class USubPresenter;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UOnboardingMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> OnboardingMenuWidgetClass;

private:
	UPROPERTY(Transient)
	UOnboardingTutorialSubPresenter* _onboardingTutorialSubPresenter;

	UPROPERTY(Transient)
	UGameManualSubPresenter* _gameManualSubPresenter;

	UPROPERTY(Transient)
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION()
	void OnSetUIEnabled(bool enabled);

	UFUNCTION()
	void OnMenuTabSelectedAgain(EOnboardingMenuState menuState);

	UFUNCTION()
	void OnMenuTabSelected(EOnboardingMenuState menuState);

	UFUNCTION()
	void OnBackAction();

public:
	UOnboardingMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingMenuPresenter) { return 0; }
