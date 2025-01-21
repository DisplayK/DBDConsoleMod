#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "Components/ActorComponent.h"
#include "AIGoal.h"
#include "AIGoalWeightContainer.h"
#include "DBDAIGoalComponent.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIGoalComponent : public UActorComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UObject*, FAIGoal> _activeGoals;

	UPROPERTY(Transient)
	TMap<UObject*, FAIGoalWeightContainer> _foundWeightedGoals;

public:
	UDBDAIGoalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIGoalComponent) { return 0; }
