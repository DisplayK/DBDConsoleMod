#pragma once

#include "CoreMinimal.h"
#include "ArchivesConfig.generated.h"

USTRUCT()
struct FArchivesConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 CommunityNodeRefreshInterval;

public:
	DEADBYDAYLIGHT_API FArchivesConfig();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesConfig) { return 0; }
