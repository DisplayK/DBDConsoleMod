#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXboxOneAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkXboxOneAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint16 MaximumNumberOfXMAVoices;

	UPROPERTY(EditAnywhere)
	bool UseHardwareCodecLowLatencyMode;

public:
	AKAUDIO_API FAkXboxOneAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXboxOneAdvancedInitializationSettings) { return 0; }
