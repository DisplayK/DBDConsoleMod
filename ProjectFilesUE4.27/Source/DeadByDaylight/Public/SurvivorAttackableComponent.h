#pragma once

#include "CoreMinimal.h"
#include "PlayerHitCosmeticParams.h"
#include "EAttackType.h"
#include "AttackableComponent.h"
#include "SurvivorAttackableComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorAttackableComponent : public UAttackableComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HitCosmetic_NonLocal(FPlayerHitCosmeticParams params);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HitCosmetic(FPlayerHitCosmeticParams params);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HitCosmetic(const AActor* attacker, EAttackType attackType, bool causeKO, bool isWeaponHit);

public:
	USurvivorAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAttackableComponent) { return 0; }
