#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActivateOnEventBaseActivationStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class UActivateOnEventBaseActivationStrategy : public UObject
{
	GENERATED_BODY()

public:
	UActivateOnEventBaseActivationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventBaseActivationStrategy) { return 0; }
