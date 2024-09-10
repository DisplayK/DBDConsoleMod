#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "PigAmbushAttackSuccessSubstate.generated.h"

UCLASS()
class THEPIG_API UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UPigAmbushAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPigAmbushAttackSuccessSubstate) { return 0; }
