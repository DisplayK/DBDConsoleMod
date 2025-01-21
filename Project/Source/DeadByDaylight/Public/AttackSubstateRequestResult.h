#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "AttackSubstateRequestResult.generated.h"

USTRUCT()
struct FAttackSubstateRequestResult
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool IsValid;

	UPROPERTY()
	EAttackSubstate RequestedNextSubstate;

	UPROPERTY()
	EAttackSubstate ServerNextSubstate;

public:
	DEADBYDAYLIGHT_API FAttackSubstateRequestResult();
};

FORCEINLINE uint32 GetTypeHash(const FAttackSubstateRequestResult) { return 0; }
