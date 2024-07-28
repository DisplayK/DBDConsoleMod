#pragma once

#include "CoreMinimal.h"
#include "NewsContentDetails.h"
#include "NewsContentOnlineData.generated.h"

USTRUCT()
struct FNewsContentOnlineData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FNewsContentDetails> News;

	UPROPERTY(SkipSerialization)
	bool News_isset;

public:
	DEADBYDAYLIGHT_API FNewsContentOnlineData();
};

FORCEINLINE uint32 GetTypeHash(const FNewsContentOnlineData) { return 0; }
