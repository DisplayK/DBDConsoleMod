#pragma once

#include "CoreMinimal.h"
#include "AbstractGameFlowHandler.h"
#include "GameFlowHandler.generated.h"

UCLASS()
class GAMEFLOW_API UGameFlowHandler : public UAbstractGameFlowHandler
{
	GENERATED_BODY()

public:
	UGameFlowHandler();
};

FORCEINLINE uint32 GetTypeHash(const UGameFlowHandler) { return 0; }
