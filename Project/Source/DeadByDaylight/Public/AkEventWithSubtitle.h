#pragma once

#include "CoreMinimal.h"
#include "AkEventWithSubtitle.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkEventWithSubtitle
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* AudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasSubtitles;

	UPROPERTY(EditAnywhere)
	uint32 DelayMsBeforeSubtitles;

public:
	DEADBYDAYLIGHT_API FAkEventWithSubtitle();
};

FORCEINLINE uint32 GetTypeHash(const FAkEventWithSubtitle) { return 0; }
