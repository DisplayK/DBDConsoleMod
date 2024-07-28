#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "OniDemonPowerAttackOpenSubstate.generated.h"

UCLASS()
class THEONI_API UOniDemonPowerAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttackOpenSubstate) { return 0; }
