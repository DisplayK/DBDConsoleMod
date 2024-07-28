#pragma once

#include "CoreMinimal.h"
#include "Region.generated.h"

USTRUCT(BlueprintType)
struct FRegion
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Region;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IP;

public:
	DEADBYDAYLIGHT_API FRegion();
};

FORCEINLINE uint32 GetTypeHash(const FRegion) { return 0; }
