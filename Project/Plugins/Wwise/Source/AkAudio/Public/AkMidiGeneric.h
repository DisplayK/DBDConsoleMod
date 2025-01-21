#pragma once

#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiGeneric.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiGeneric: public FAkMidiEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Param1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	uint8 Param2;

public:
	AKAUDIO_API FAkMidiGeneric();
};

FORCEINLINE uint32 GetTypeHash(const FAkMidiGeneric) { return 0; }
