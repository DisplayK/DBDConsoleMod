#pragma once

#include "CoreMinimal.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackObstructSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackObstructSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

public:
	UDBDAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackObstructSubstate) { return 0; }
