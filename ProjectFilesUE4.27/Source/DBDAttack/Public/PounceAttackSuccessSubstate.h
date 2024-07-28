#pragma once

#include "CoreMinimal.h"
#include "DBDAttackSuccessSubstate.h"
#include "PounceAttackSuccessSubstate.generated.h"

UCLASS()
class DBDATTACK_API UPounceAttackSuccessSubstate : public UDBDAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UPounceAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackSuccessSubstate) { return 0; }
