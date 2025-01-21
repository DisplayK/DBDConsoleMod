#pragma once

#include "CoreMinimal.h"
#include "AkChannelMask.generated.h"

USTRUCT(BlueprintType)
struct FAkChannelMask
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChannelMask;

public:
	AKAUDIO_API FAkChannelMask();
};

FORCEINLINE uint32 GetTypeHash(const FAkChannelMask) { return 0; }
