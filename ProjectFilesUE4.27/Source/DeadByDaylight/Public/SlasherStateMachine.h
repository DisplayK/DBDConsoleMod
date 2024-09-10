#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine.h"
#include "SlasherStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherStateMachine : public UPlayerStateMachine
{
	GENERATED_BODY()

public:
	USlasherStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const USlasherStateMachine) { return 0; }
