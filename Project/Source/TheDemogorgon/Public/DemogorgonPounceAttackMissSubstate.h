#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "DemogorgonPounceAttackMissSubstate.generated.h"

UCLASS()
class THEDEMOGORGON_API UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UDemogorgonPounceAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceAttackMissSubstate) { return 0; }
