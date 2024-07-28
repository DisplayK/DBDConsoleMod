#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiNoteOnOff.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiNoteOnOff: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Note;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Velocity;

public:
	AKAUDIO_API FAkMidiNoteOnOff();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiNoteOnOff) { return 0; }
