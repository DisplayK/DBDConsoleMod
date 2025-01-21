#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "EAkMidiCcValues.h"
#include "AkMidiCc.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiCc: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAkMidiCcValues Cc;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Value;

public:
	AKAUDIO_API FAkMidiCc();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiCc) { return 0; }
