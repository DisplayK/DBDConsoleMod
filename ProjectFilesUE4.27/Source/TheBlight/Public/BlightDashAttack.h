#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "BlightDashAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEBLIGHT_API UBlightDashAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UBlightDashAttack();
};

FORCEINLINE uint32 GetTypeHash(const UBlightDashAttack) { return 0; }
