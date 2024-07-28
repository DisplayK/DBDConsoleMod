#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "DemogorgonPounceAttackOpenSubstate.generated.h"

UCLASS()
class THEDEMOGORGON_API UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UDemogorgonPounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceAttackOpenSubstate) { return 0; }
