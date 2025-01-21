#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "ExecutionerTormentAttackObstructSubstate.generated.h"

UCLASS()
class THEEXECUTIONER_API UExecutionerTormentAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UExecutionerTormentAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerTormentAttackObstructSubstate) { return 0; }
