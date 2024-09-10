#pragma once

#include "CoreMinimal.h"
#include "AvailableInteractionCalculator.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FAvailableInteractionCalculator
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TSet<UInteractionDefinition*> _interactions;

	UPROPERTY(EditDefaultsOnly)
	float _fullEvaluationFrequency;

	UPROPERTY(EditDefaultsOnly)
	int32 _maxFramesForFullEvaluation;

	UPROPERTY(EditDefaultsOnly)
	float _secondsBetweenNullReferenceCleanup;

public:
	DEADBYDAYLIGHT_API FAvailableInteractionCalculator();
};

FORCEINLINE uint32 GetTypeHash(const FAvailableInteractionCalculator) { return 0; }
