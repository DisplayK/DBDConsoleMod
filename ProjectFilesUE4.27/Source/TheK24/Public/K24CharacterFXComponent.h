#pragma once

#include "CoreMinimal.h"
#include "OnKillerContaminatedSurvivor.h"
#include "Components/ActorComponent.h"
#include "OnPowerLevelChangedFX.h"
#include "OnKillerHitZombie.h"
#include "K24CharacterFXComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24CharacterFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPowerLevelChangedFX OnPowerLevelChangedFx;

	UPROPERTY(BlueprintAssignable)
	FOnKillerHitZombie Local_OnKillerHitZombie;

	UPROPERTY(BlueprintAssignable)
	FOnKillerContaminatedSurvivor Local_OnKillerContaminatedSurvivor;

private:
	UFUNCTION()
	void Local_OnKillerPowerLevelChanged(int32 powerLevel);

public:
	UK24CharacterFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK24CharacterFXComponent) { return 0; }
