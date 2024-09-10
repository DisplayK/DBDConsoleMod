#pragma once

#include "CoreMinimal.h"
#include "AkXSXApuHeapInitializationSettings.generated.h"

USTRUCT()
struct FAkXSXApuHeapInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 CachedSize;

	UPROPERTY(EditAnywhere)
	uint32 NonCachedSize;

public:
	AKAUDIO_API FAkXSXApuHeapInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXSXApuHeapInitializationSettings) { return 0; }
