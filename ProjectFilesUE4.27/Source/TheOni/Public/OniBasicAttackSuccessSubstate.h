#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "OniBasicAttackSuccessSubstate.generated.h"

UCLASS()
class THEONI_API UOniBasicAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UOniBasicAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniBasicAttackSuccessSubstate) { return 0; }
