#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "OniDemonPowerAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UOniDemonPowerAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttack();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttack) { return 0; }
