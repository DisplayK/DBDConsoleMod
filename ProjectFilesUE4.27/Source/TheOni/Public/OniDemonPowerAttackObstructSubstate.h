#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "OniDemonPowerAttackObstructSubstate.generated.h"

UCLASS()
class THEONI_API UOniDemonPowerAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttackObstructSubstate) { return 0; }
