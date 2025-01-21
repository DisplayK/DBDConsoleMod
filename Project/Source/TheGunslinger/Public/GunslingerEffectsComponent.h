#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GunslingerEffectsComponent.generated.h"

class AHarpoonRifle;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UGunslingerEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayOutOfAmmoSound);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsAimingChanged, bool, isAiming);

public:
	UPROPERTY(BlueprintAssignable)
	FOnIsAimingChanged OnIsAimingChanged;

	UPROPERTY(BlueprintAssignable)
	FPlayOutOfAmmoSound PlayOutOfAmmoSound;

protected:
	UPROPERTY(EditAnywhere)
	float _minimumTimeBetweenBroadcast;

private:
	UPROPERTY(Transient)
	AHarpoonRifle* _rifle;

private:
	UFUNCTION()
	void OnItemUsedStateChanged(bool isPressed);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayOutOfAmmoSound();

public:
	UGunslingerEffectsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerEffectsComponent) { return 0; }
