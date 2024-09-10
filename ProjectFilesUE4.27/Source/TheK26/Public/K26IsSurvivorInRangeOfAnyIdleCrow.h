#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "OnIsTrueChanged.h"
#include "K26IsSurvivorInRangeOfAnyIdleCrow.generated.h"

class AK26CrowProjectile;
class UAuthoritativeActorPoolComponent;
class ACamperPlayer;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnIsTrueChanged OnIsTrueChanged;

private:
	UPROPERTY(Transient)
	ACamperPlayer* _trackedSurvivor;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetIsTrue(const bool isTrue);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_SetVariables(ACamperPlayer* trackedSurvivor, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent, const float range);

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

	UFUNCTION()
	void Authority_OnCrowProjectileStateChanged(AK26CrowProjectile* crowProjectile);

	UFUNCTION()
	void Authority_OnCrowAddedToPool(AActor* crowProjectileActor);

public:
	UK26IsSurvivorInRangeOfAnyIdleCrow();
};

FORCEINLINE uint32 GetTypeHash(const UK26IsSurvivorInRangeOfAnyIdleCrow) { return 0; }
