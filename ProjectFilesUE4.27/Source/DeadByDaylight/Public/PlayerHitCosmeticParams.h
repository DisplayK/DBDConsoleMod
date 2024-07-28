#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "PlayerHitCosmeticParams.generated.h"

class APawn;
class ACamperPlayer;

USTRUCT(BlueprintType)
struct FPlayerHitCosmeticParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TWeakObjectPtr<APawn> Attacker;

	UPROPERTY()
	TWeakObjectPtr<ACamperPlayer> Target;

	UPROPERTY()
	EAttackType AttackType;

	UPROPERTY()
	bool CausedKO;

	UPROPERTY()
	bool IsWeaponHit;

public:
	DEADBYDAYLIGHT_API FPlayerHitCosmeticParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerHitCosmeticParams) { return 0; }
