#pragma once

#include "CoreMinimal.h"
#include "ActorPairQueryHeightRange.generated.h"

USTRUCT(BlueprintType)
struct FActorPairQueryHeightRange
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _upper;

public:
	QUERYSERVICE_API FActorPairQueryHeightRange();
};

FORCEINLINE uint32 GetTypeHash(const FActorPairQueryHeightRange) { return 0; }
