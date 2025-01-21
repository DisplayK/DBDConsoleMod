#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveCondemned.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveCondemned : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter NearCondemnedWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter HighCondemnedThreshold;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter SolveCondemnedBasicWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CondemnedLevelProportionalWeight;

public:
	UAISkill_FindInteractable_SolveCondemned();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SolveCondemned) { return 0; }
