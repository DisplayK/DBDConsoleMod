#pragma once

#include "CoreMinimal.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackOpenSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackOpenSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

public:
	UDBDAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackOpenSubstate) { return 0; }
