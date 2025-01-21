#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "PigAmbushAttackHittingSubstate.generated.h"

UCLASS()
class THEPIG_API UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UPigAmbushAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPigAmbushAttackHittingSubstate) { return 0; }
