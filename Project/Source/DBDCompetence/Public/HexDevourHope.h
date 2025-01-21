#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexDevourHope.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexDevourHope : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _devourHopeSpeedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _rangeFromUnhookedSurvivorNeeded;

	UPROPERTY(EditDefaultsOnly)
	int32 _tokenThresholdToImposeSpeedBoost;

	UPROPERTY(EditDefaultsOnly)
	int32 _tokenThresholdToImposeExposeEffect;

	UPROPERTY(EditDefaultsOnly)
	int32 _tokenThresholdToImposeAbilityToKill;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _attackGameEvents;

	UPROPERTY(EditDefaultsOnly)
	float _moveSpeedIncrement;

	UPROPERTY(EditDefaultsOnly)
	FName _vulnerabilityStatusViewID;

public:
	UHexDevourHope();
};

FORCEINLINE uint32 GetTypeHash(const UHexDevourHope) { return 0; }
