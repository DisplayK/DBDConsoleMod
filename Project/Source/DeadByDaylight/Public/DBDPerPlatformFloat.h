#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "DBDPerPlatformFloat.generated.h"

USTRUCT(BlueprintType)
struct FDBDPerPlatformFloat
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformFloat Value;

public:
	DEADBYDAYLIGHT_API FDBDPerPlatformFloat();
};

FORCEINLINE uint32 GetTypeHash(const FDBDPerPlatformFloat) { return 0; }
