#pragma once

#include "CoreMinimal.h"
#include "DelegateHandleWrapper.generated.h"

USTRUCT()
struct FDelegateHandleWrapper
{
	GENERATED_BODY()

public:
	COREUTILITIES_API FDelegateHandleWrapper();
};

FORCEINLINE uint32 GetTypeHash(const FDelegateHandleWrapper) { return 0; }
