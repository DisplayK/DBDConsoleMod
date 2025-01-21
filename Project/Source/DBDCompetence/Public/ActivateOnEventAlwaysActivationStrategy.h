#pragma once

#include "CoreMinimal.h"
#include "ActivateOnEventBaseActivationStrategy.h"
#include "ActivateOnEventAlwaysActivationStrategy.generated.h"

UCLASS(EditInlineNew)
class UActivateOnEventAlwaysActivationStrategy : public UActivateOnEventBaseActivationStrategy
{
	GENERATED_BODY()

public:
	UActivateOnEventAlwaysActivationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventAlwaysActivationStrategy) { return 0; }
