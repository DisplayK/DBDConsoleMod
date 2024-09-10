#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiNoteAftertouch.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiNoteAftertouch: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Note;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Value;

public:
	AKAUDIO_API FAkMidiNoteAftertouch();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiNoteAftertouch) { return 0; }
