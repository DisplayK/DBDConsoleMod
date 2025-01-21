#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "OniDemonPowerAttackHittingSubstate.generated.h"

UCLASS()
class THEONI_API UOniDemonPowerAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttackHittingSubstate) { return 0; }
