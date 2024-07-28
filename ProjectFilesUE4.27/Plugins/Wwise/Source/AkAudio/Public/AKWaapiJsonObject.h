#pragma once

#include "CoreMinimal.h"
#include "AKWaapiJsonObject.generated.h"

USTRUCT(BlueprintType)
struct FAKWaapiJsonObject
{
	GENERATED_BODY()

public:
	AKAUDIO_API FAKWaapiJsonObject();
};

FORCEINLINE uint32 GetTypeHash(const FAKWaapiJsonObject) { return 0; }
