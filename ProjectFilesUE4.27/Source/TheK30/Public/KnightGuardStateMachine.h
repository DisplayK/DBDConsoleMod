#pragma once

#include "CoreMinimal.h"
#include "PlayerStateMachine.h"
#include "KnightGuardStateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKnightGuardStateMachine : public UPlayerStateMachine
{
	GENERATED_BODY()

public:
	UKnightGuardStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UKnightGuardStateMachine) { return 0; }
