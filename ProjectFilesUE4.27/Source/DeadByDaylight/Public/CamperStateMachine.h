#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine.h"
#include "CamperStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperStateMachine : public UPlayerStateMachine
{
	GENERATED_BODY()

public:
	UCamperStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UCamperStateMachine) { return 0; }
