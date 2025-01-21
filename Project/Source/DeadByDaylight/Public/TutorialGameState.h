#pragma once

#include "CoreMinimal.h"
#include "ETutorialStep.h"
#include "DBDGameState.h"
#include "TutorialGameState.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ATutorialGameState : public ADBDGameState
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentTutorialStepChanged, ETutorialStep, step);

public:
	UPROPERTY(BlueprintAssignable)
	FOnCurrentTutorialStepChanged OnCurrentTutorialStepChanged;

private:
	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _forceHatchVisible;

public:
	UFUNCTION(BlueprintCallable)
	void TutorialEndReached();

	UFUNCTION(BlueprintCallable)
	void SetForcedHatchVisibility(bool isHatchVisible);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetEscapeRequirementsVisibility(bool isVisible) const;

	UFUNCTION(BlueprintCallable)
	void SetCurrentTutorialStep(ETutorialStep step);

	UFUNCTION(BlueprintPure)
	bool IsTutorialStarted() const;

	UFUNCTION(BlueprintPure)
	ETutorialStep GetCurrentTutorialStep() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void CompleteLocallyControlledCharacterIntros() const;

public:
	ATutorialGameState();
};

FORCEINLINE uint32 GetTypeHash(const ATutorialGameState) { return 0; }
