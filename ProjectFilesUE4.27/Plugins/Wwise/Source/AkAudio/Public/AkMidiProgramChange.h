#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiProgramChange.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiProgramChange: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 ProgramNum;

public:
	AKAUDIO_API FAkMidiProgramChange();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiProgramChange) { return 0; }
