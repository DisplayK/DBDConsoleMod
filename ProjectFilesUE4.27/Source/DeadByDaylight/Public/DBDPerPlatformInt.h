#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "DBDPerPlatformInt.generated.h"

USTRUCT(BlueprintType)
struct FDBDPerPlatformInt
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformInt Value;

public:
	DEADBYDAYLIGHT_API FDBDPerPlatformInt();
};

FORCEINLINE uint32 GetTypeHash(const FDBDPerPlatformInt) { return 0; }
