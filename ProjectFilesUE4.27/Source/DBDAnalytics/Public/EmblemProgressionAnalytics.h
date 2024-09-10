#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EmblemProgressionDetailsAnalytics.h"
#include "EmblemProgressionAnalytics.generated.h"

USTRUCT()
struct FEmblemProgressionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString EmblemId;

	UPROPERTY()
	float EmblemValue;

	UPROPERTY()
	FString EmblemQuality;

	UPROPERTY()
	TArray<FEmblemProgressionDetailsAnalytics> ProgressionDetails;

public:
	DBDANALYTICS_API FEmblemProgressionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionAnalytics) { return 0; }
