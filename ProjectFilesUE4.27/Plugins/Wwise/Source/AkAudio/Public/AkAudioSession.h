#pragma once

#include "CoreMinimal.h"
#include "EAkAudioSessionCategory.h"
#include "EAkAudioSessionMode.h"
#include "AkAudioSession.generated.h"

USTRUCT()
struct FAkAudioSession
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EAkAudioSessionCategory AudioSessionCategory;

	UPROPERTY(EditAnywhere)
	uint32 AudioSessionCategoryOptions;

	UPROPERTY(EditAnywhere)
	EAkAudioSessionMode AudioSessionMode;

public:
	AKAUDIO_API FAkAudioSession();
};

FORCEINLINE uint32 GetTypeHash(const FAkAudioSession) { return 0; }
