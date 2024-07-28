#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "DemogorgonPounceAttackSuccessSubstate.generated.h"

UCLASS()
class THEDEMOGORGON_API UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UDemogorgonPounceAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceAttackSuccessSubstate) { return 0; }
