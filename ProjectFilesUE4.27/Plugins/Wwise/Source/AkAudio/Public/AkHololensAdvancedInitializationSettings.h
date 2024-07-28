#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkHololensAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkHololensAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool UseHeadMountedDisplayAudioDevice;

public:
	AKAUDIO_API FAkHololensAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkHololensAdvancedInitializationSettings) { return 0; }
