#pragma once

#include "CoreMinimal.h"
#include "DBDAttackMissSubstate.h"
#include "PounceAttackMissSubstate.generated.h"

UCLASS()
class DBDATTACK_API UPounceAttackMissSubstate : public UDBDAttackMissSubstate
{
	GENERATED_BODY()

public:
	UPounceAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackMissSubstate) { return 0; }
