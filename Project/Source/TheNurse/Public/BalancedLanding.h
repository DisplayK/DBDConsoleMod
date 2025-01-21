#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BalancedLanding.generated.h"

class UStatusEffect;
class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBalancedLanding : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _staggerReductionEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _activableExhaustedEffect;

	UPROPERTY(EditDefaultsOnly)
	float _sprintDuration;

	UPROPERTY(EditDefaultsOnly)
	float _exhaustionDurationPerLevel;

	UPROPERTY(Transient, Export)
	UActivatableExhaustedEffect* _exhaustedEffect;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_WarnBalancedLandingPredicted();

	UFUNCTION(Client, Reliable)
	void Client_UnvalidateBalanceLanding();

public:
	UBalancedLanding();
};

FORCEINLINE uint32 GetTypeHash(const UBalancedLanding) { return 0; }
