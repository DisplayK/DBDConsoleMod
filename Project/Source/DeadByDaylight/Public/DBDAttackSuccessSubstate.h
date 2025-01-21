#pragma once

#include "CoreMinimal.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackSuccessSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackSuccessSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

public:
	UDBDAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackSuccessSubstate) { return 0; }
