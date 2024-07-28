#pragma once

#include "CoreMinimal.h"
#include "AttackDelegatePair.generated.h"

class UDBDAttack;

USTRUCT()
struct FAttackDelegatePair
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDBDAttack* _attack;

public:
	DEADBYDAYLIGHT_API FAttackDelegatePair();
};

FORCEINLINE uint32 GetTypeHash(const FAttackDelegatePair) { return 0; }
