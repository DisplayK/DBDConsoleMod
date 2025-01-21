#pragma once

#include "CoreMinimal.h"
#include "EAkMidiEventType.h"
#include "AkMidiEventBase.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAkMidiEventType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Chan;

public:
	AKAUDIO_API FAkMidiEventBase();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiEventBase) { return 0; }
