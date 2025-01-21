#pragma once

#include "CoreMinimal.h"
#include "AIRoll.h"
#include "PathStrategy_Flee.h"
#include "EAIDifficultyLevel.h"
#include "GameStateEvadeLoopStrategyMapContainer.h"
#include "EAIFleeLoopStrategy.h"
#include "PathStrategy_FleeLoop.generated.h"

class UPathBuilder_EvadeLoop;

UCLASS(EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLoop : public UPathStrategy_Flee
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TMap<EAIDifficultyLevel, FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable;

	UPROPERTY(EditDefaultsOnly, Export)
	TMap<EAIFleeLoopStrategy, UPathBuilder_EvadeLoop*> FleeLoopStrategyPathBuilders;

	UPROPERTY(EditDefaultsOnly)
	float CanBranchUnderEndPathDistance;

	UPROPERTY(EditDefaultsOnly)
	TMap<EAIFleeLoopStrategy, FAIRoll> BranchRolls;

	UPROPERTY(EditDefaultsOnly)
	float RejectLoopBranchUnderEndPointsDistance;

	UPROPERTY(EditDefaultsOnly)
	float RejectBranchPointNearerHostileSourceDistance;

	UPROPERTY(EditDefaultsOnly)
	float RejectBranchUnderNavLinkDistance;

	UPROPERTY(EditDefaultsOnly)
	float AddDistanceToRequiredBranchEvadeGap;

public:
	UPathStrategy_FleeLoop();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_FleeLoop) { return 0; }
