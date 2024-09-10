#pragma once

#include "CoreMinimal.h"
#include "DependencyBasedActivationStrategy.generated.h"

USTRUCT()
struct FDependencyBasedActivationStrategy
{
	GENERATED_BODY()

public:
	ACTIVATION_API FDependencyBasedActivationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const FDependencyBasedActivationStrategy) { return 0; }
