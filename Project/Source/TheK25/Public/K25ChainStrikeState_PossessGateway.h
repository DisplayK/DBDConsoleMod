#pragma once

#include "CoreMinimal.h"
#include "K25ChainStrikeBaseState.h"
#include "K25ChainStrikeState_PossessGateway.generated.h"

UCLASS(Abstract)
class UK25ChainStrikeState_PossessGateway : public UK25ChainStrikeBaseState
{
	GENERATED_BODY()

public:
	UK25ChainStrikeState_PossessGateway();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeState_PossessGateway) { return 0; }
