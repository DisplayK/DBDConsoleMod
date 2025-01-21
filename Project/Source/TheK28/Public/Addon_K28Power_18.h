#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "AnimationMontageDescriptor.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_18.generated.h"

class UStatusEffect;
class ALocker;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_18 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _survivorStatusEffectTime;

	UPROPERTY(EditDefaultsOnly)
	float _lockersToSlamRange;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _montage;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerLockerAnimationOnAllLockers(const TArray<ALocker*>& lockers);

public:
	UAddon_K28Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_18) { return 0; }
