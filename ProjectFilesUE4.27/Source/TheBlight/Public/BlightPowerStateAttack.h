#pragma once

#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "BlightPowerStateAttack.generated.h"

UCLASS()
class UBlightPowerStateAttack : public UBlightPowerStateDash
{
	GENERATED_BODY()

public:
	UBlightPowerStateAttack();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateAttack) { return 0; }
