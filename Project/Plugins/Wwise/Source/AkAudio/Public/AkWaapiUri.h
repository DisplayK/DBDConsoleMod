#pragma once

#include "CoreMinimal.h"
#include "AkWaapiUri.generated.h"

USTRUCT(BlueprintType)
struct FAkWaapiUri
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Uri;

public:
	AKAUDIO_API FAkWaapiUri();
};

FORCEINLINE uint32 GetTypeHash(const FAkWaapiUri) { return 0; }
