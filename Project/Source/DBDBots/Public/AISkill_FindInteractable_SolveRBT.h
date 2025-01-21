#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveRBT.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveRBT : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter UrgencyGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter PriorityGoalWeight;

public:
	UAISkill_FindInteractable_SolveRBT();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SolveRBT) { return 0; }
