#pragma once

#include "CoreMinimal.h"
#include "ArrayOfInt32.generated.h"

USTRUCT()
struct FArrayOfInt32
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<int32> Value;

public:
	DEADBYDAYLIGHT_API FArrayOfInt32();
};

FORCEINLINE uint32 GetTypeHash(const FArrayOfInt32) { return 0; }
