#pragma once

#include "CoreMinimal.h"
#include "AttackHitResult.generated.h"

class ADBDPlayer;
class UDBDAttack;

USTRUCT()
struct FAttackHitResult
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ADBDPlayer* Attacker;

	UPROPERTY()
	ADBDPlayer* Target;

	UPROPERTY(Export)
	UDBDAttack* Attack;

	UPROPERTY()
	bool IsBasicAttack;

	UPROPERTY()
	bool CosmeticOnly;

public:
	DEADBYDAYLIGHT_API FAttackHitResult();
};

FORCEINLINE uint32 GetTypeHash(const FAttackHitResult) { return 0; }
