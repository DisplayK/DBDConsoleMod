#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "FrenzyAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzyAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UFrenzyAttack();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzyAttack) { return 0; }
