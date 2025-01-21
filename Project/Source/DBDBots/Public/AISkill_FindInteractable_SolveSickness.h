#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveSickness.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter BaseGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter UrgencyGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter InteractingGoalPenaltyWeight;

public:
	UAISkill_FindInteractable_SolveSickness();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SolveSickness) { return 0; }
