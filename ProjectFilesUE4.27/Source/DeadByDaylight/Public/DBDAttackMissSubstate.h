#pragma once

#include "CoreMinimal.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackMissSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackMissSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

public:
	UDBDAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackMissSubstate) { return 0; }
