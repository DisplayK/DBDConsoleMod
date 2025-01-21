#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "PigAmbushAttackMissSubstate.generated.h"

UCLASS()
class THEPIG_API UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UPigAmbushAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPigAmbushAttackMissSubstate) { return 0; }
