#pragma once

#include "CoreMinimal.h"
#include "ECamperDamageState.h"
#include "CamperHealResult.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FCamperHealResult
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ECamperDamageState PreviousDamageState;

	UPROPERTY(Transient)
	ECamperDamageState CurrentDamageState;

	UPROPERTY(Transient)
	int32 HealAmount;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> Healers;

public:
	DEADBYDAYLIGHT_API FCamperHealResult();
};

FORCEINLINE uint32 GetTypeHash(const FCamperHealResult) { return 0; }
