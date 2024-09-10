#pragma once

#include "CoreMinimal.h"
#include "EFPVTransitionStrategy.h"
#include "Components/ActorComponent.h"
#include "KillerIntroComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerIntroComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _percentOfCameraPanInProgressRequiredToHideKiller;

	UPROPERTY(EditDefaultsOnly)
	float _cameraPanInAmountToSquish;

	UPROPERTY(EditDefaultsOnly)
	EFPVTransitionStrategy _cameraPanInHidingStrategy;

	UPROPERTY(EditDefaultsOnly)
	float _startKillerIntroDelay;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnIntroCompleted();

	UFUNCTION()
	void KillerCameraPanInUpdateNative(const float killerIntroCompletedPercent);

public:
	UKillerIntroComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerIntroComponent) { return 0; }
