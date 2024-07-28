#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "BlinkAttackSuccessSubstate.generated.h"

UCLASS()
class THENURSE_API UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UBlinkAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkAttackSuccessSubstate) { return 0; }
