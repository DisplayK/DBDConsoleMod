#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "OniDemonPowerAttackSuccessSubstate.generated.h"

UCLASS()
class THEONI_API UOniDemonPowerAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttackSuccessSubstate) { return 0; }
