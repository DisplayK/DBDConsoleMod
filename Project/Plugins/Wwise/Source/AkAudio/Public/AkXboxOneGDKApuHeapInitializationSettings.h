#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneGDKApuHeapInitializationSettings.generated.h"

USTRUCT()
struct FAkXboxOneGDKApuHeapInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 CachedSize;

	UPROPERTY(EditAnywhere)
	uint32 NonCachedSize;

public:
	AKAUDIO_API FAkXboxOneGDKApuHeapInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXboxOneGDKApuHeapInitializationSettings) { return 0; }
