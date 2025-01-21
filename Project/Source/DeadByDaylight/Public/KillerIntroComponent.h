#pragma once

#include "CoreMinimal.h"
#include "EFPVTransitionStrategy.h"
#include "Components/ActorComponent.h"
#include "KillerIntroComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerIntroComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _percentOfCameraPanInProgressRequiredToHideKiller;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _cameraPanInAmountToSquish;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EFPVTransitionStrategy _cameraPanInHidingStrategy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _startKillerIntroDelay;

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void KillerCameraPanInUpdateNative(const float killerIntroCompletedPercent);

public:
	UKillerIntroComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerIntroComponent) { return 0; }
