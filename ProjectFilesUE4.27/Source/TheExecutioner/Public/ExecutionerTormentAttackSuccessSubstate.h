#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "ExecutionerTormentAttackSuccessSubstate.generated.h"

UCLASS()
class THEEXECUTIONER_API UExecutionerTormentAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UExecutionerTormentAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerTormentAttackSuccessSubstate) { return 0; }
