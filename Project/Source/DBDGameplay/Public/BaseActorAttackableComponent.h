#pragma once

#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "GameplayTagContainer.h"
#include "BaseActorAttackableComponent.generated.h"

class ABaseProjectile;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UBaseActorAttackableComponent : public UAttackableComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTagContainer _killerProjectilesThatCanDamageActor;

public:
	UFUNCTION(BlueprintCallable)
	void HitWithProjectile(ABaseProjectile* projectile);

public:
	UBaseActorAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBaseActorAttackableComponent) { return 0; }
