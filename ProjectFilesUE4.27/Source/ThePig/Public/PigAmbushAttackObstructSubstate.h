#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "PigAmbushAttackObstructSubstate.generated.h"

UCLASS()
class THEPIG_API UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UPigAmbushAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPigAmbushAttackObstructSubstate) { return 0; }
