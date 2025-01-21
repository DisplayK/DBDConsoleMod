#pragma once

#include "CoreMinimal.h"
#include "EmblemProgressionDetailsAnalytics.generated.h"

USTRUCT()
struct FEmblemProgressionDetailsAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ProgressionType;

	UPROPERTY()
	float ProgressionPoint;

public:
	DBDANALYTICS_API FEmblemProgressionDetailsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionDetailsAnalytics) { return 0; }
