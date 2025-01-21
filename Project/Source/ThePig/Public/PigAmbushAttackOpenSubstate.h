#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "PigAmbushAttackOpenSubstate.generated.h"

UCLASS()
class THEPIG_API UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UPigAmbushAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPigAmbushAttackOpenSubstate) { return 0; }
