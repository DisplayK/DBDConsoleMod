#pragma once

#include "CoreMinimal.h"
#include "DBDAttackHittingSubstate.h"
#include "PounceAttackHittingSubstate.generated.h"

UCLASS()
class DBDATTACK_API UPounceAttackHittingSubstate : public UDBDAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UPounceAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackHittingSubstate) { return 0; }
