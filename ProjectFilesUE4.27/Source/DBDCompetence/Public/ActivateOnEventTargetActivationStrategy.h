#pragma once

#include "CoreMinimal.h"
#include "ActivateOnEventBaseActivationStrategy.h"
#include "ActivateOnEventTargetActivationStrategy.generated.h"

UCLASS(EditInlineNew)
class DBDCOMPETENCE_API UActivateOnEventTargetActivationStrategy : public UActivateOnEventBaseActivationStrategy
{
	GENERATED_BODY()

public:
	UActivateOnEventTargetActivationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventTargetActivationStrategy) { return 0; }
