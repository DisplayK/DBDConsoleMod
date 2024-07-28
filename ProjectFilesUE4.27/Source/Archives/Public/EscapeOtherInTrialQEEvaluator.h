#pragma once

#include "CoreMinimal.h"
#include "DoBeforeEscapeQEEvaluator.h"
#include "EscapeOtherInTrialQEEvaluator.generated.h"

UCLASS()
class UEscapeOtherInTrialQEEvaluator : public UDoBeforeEscapeQEEvaluator
{
	GENERATED_BODY()

public:
	UEscapeOtherInTrialQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeOtherInTrialQEEvaluator) { return 0; }
