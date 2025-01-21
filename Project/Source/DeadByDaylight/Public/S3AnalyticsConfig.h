#pragma once

#include "CoreMinimal.h"
#include "S3AnalyticsConfig.generated.h"

USTRUCT()
struct FS3AnalyticsConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool GameInitVerbose;

	UPROPERTY()
	FString GameConsoleLogMinimumVerbosity;

public:
	DEADBYDAYLIGHT_API FS3AnalyticsConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3AnalyticsConfig) { return 0; }
