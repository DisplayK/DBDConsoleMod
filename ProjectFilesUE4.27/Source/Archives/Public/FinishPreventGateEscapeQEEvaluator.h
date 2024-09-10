#pragma once

#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "FinishPreventGateEscapeQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UFinishPreventGateEscapeQEEvaluator : public UEndOfGameQEEvaluator
{
	GENERATED_BODY()

public:
	UFinishPreventGateEscapeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UFinishPreventGateEscapeQEEvaluator) { return 0; }
