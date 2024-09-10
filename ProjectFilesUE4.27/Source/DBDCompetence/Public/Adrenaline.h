#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Adrenaline.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAdrenaline : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _exhaustedEffectID;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _speedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustionEffect;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedDuration;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedPercentage;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DispatchAdrenalineEvents(const bool isHealthy, const float healAmount);

	UFUNCTION()
	void Authority_AttemptApplyPerk();

public:
	UAdrenaline();
};

FORCEINLINE uint32 GetTypeHash(const UAdrenaline) { return 0; }
