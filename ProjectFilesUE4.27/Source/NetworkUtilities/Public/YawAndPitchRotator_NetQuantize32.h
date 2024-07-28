#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YawAndPitchRotator_NetQuantize32.generated.h"

USTRUCT(BlueprintType)
struct FYawAndPitchRotator_NetQuantize32
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FRotator _value;

public:
	NETWORKUTILITIES_API FYawAndPitchRotator_NetQuantize32();
};

FORCEINLINE uint32 GetTypeHash(const FYawAndPitchRotator_NetQuantize32) { return 0; }
