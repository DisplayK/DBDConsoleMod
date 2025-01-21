#pragma once

#include "CoreMinimal.h"
#include "AkWaapiSubscriptionId.generated.h"

USTRUCT(BlueprintType)
struct FAkWaapiSubscriptionId
{
	GENERATED_BODY()

public:
	AKAUDIO_API FAkWaapiSubscriptionId();
};

FORCEINLINE uint32 GetTypeHash(const FAkWaapiSubscriptionId) { return 0; }
