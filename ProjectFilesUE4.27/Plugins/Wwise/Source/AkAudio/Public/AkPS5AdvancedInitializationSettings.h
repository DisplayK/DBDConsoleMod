#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS5AdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkPS5AdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool UseHardwareCodecLowLatencyMode;

	UPROPERTY(EditAnywhere)
	bool bVorbisHwAcceleration;

public:
	AKAUDIO_API FAkPS5AdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkPS5AdvancedInitializationSettings) { return 0; }
