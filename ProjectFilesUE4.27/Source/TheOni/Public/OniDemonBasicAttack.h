#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "OniDemonBasicAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UOniDemonBasicAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UOniDemonBasicAttack();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonBasicAttack) { return 0; }
