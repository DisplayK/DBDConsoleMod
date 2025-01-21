#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_CloseTelevisionNearGenerator.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_CloseTelevisionNearGenerator : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaximumCondemnedPercentToCloseTelevision;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter DistanceBetweenGeneratorAndTelevisionThreshold;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter BaseValue;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CloseTelevisionDistanceLinearWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter CloseTelevisionMaximumDistanceFromCamper;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaxHeightDifferenceToCloseTelevisions;

public:
	UAISkill_FindInteractable_CloseTelevisionNearGenerator();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_CloseTelevisionNearGenerator) { return 0; }
