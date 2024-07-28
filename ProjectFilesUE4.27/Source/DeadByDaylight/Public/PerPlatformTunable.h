#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PerPlatformProperties.h"
#include "PerPlatformTunable.generated.h"

USTRUCT()
struct FPerPlatformTunable: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformFloat Value;

	UPROPERTY(EditAnywhere)
	FString Description;

public:
	DEADBYDAYLIGHT_API FPerPlatformTunable();
};

FORCEINLINE uint32 GetTypeHash(const FPerPlatformTunable) { return 0; }
