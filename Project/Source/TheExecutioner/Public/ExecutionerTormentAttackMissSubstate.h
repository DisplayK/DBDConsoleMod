#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "ExecutionerTormentAttackMissSubstate.generated.h"

UCLASS()
class THEEXECUTIONER_API UExecutionerTormentAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UExecutionerTormentAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerTormentAttackMissSubstate) { return 0; }
