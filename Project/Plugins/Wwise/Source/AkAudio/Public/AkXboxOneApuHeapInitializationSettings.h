#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneApuHeapInitializationSettings.generated.h"

USTRUCT()
struct FAkXboxOneApuHeapInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 CachedSize;

	UPROPERTY(EditAnywhere)
	uint32 NonCachedSize;

public:
	AKAUDIO_API FAkXboxOneApuHeapInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXboxOneApuHeapInitializationSettings) { return 0; }
