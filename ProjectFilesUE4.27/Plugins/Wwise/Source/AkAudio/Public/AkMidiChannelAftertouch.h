#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiChannelAftertouch.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiChannelAftertouch: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Value;

public:
	AKAUDIO_API FAkMidiChannelAftertouch();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiChannelAftertouch) { return 0; }
