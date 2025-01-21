#pragma once

#include "CoreMinimal.h"
#include "OniDemonPowerAttack.h"
#include "OniDemonDashAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UOniDemonDashAttack : public UOniDemonPowerAttack
{
	GENERATED_BODY()

public:
	UOniDemonDashAttack();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonDashAttack) { return 0; }
