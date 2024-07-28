#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "OniDemonPowerAttackMissSubstate.generated.h"

UCLASS()
class THEONI_API UOniDemonPowerAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UOniDemonPowerAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonPowerAttackMissSubstate) { return 0; }
