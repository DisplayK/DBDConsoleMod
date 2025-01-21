#pragma once

#include "CoreMinimal.h"
#include "EAIFleeLoopStrategy.h"
#include "EAIGameState.h"
#include "GameStateEvadeLoopStrategyMapContainer.generated.h"

USTRUCT()
struct FGameStateEvadeLoopStrategyMapContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TMap<EAIGameState, EAIFleeLoopStrategy> Map;

public:
	DBDBOTS_API FGameStateEvadeLoopStrategyMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FGameStateEvadeLoopStrategyMapContainer) { return 0; }
