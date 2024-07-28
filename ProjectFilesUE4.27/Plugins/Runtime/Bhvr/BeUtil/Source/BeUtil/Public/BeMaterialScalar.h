#pragma once

#include "CoreMinimal.h"
#include "BeMaterialScalar.generated.h"

USTRUCT(BlueprintType)
struct FBeMaterialScalar
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FName Name;

	UPROPERTY(BlueprintReadWrite)
	float Scalar;

public:
	BEUTIL_API FBeMaterialScalar();
};

FORCEINLINE uint32 GetTypeHash(const FBeMaterialScalar) { return 0; }
