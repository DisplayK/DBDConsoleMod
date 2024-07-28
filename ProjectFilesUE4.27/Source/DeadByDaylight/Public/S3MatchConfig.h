#pragma once

#include "CoreMinimal.h"
#include "S3MatchConfig.generated.h"

USTRUCT()
struct FS3MatchConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 MaxMatchSeconds;

	UPROPERTY()
	int32 MaxEndGameCollapseSeconds;

public:
	DEADBYDAYLIGHT_API FS3MatchConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3MatchConfig) { return 0; }
