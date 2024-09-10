#pragma once

#include "CoreMinimal.h"
#include "ChargeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FChargeData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	AActor* Instigator;

	UPROPERTY(Transient)
	float ChargeAmount;

	UPROPERTY(Transient)
	bool BypassSkillCheckFail;

	UPROPERTY(Transient)
	bool IsOneTimeIncrease;

public:
	DEADBYDAYLIGHT_API FChargeData();
};

FORCEINLINE uint32 GetTypeHash(const FChargeData) { return 0; }
