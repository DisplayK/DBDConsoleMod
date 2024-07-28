#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "DemogorgonPounceAttackObstructSubstate.generated.h"

UCLASS()
class THEDEMOGORGON_API UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UDemogorgonPounceAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceAttackObstructSubstate) { return 0; }
