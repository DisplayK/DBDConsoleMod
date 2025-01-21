#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXSXAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkXSXAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint16 MaximumNumberOfXMAVoices;

	UPROPERTY(EditAnywhere)
	bool UseHardwareCodecLowLatencyMode;

	UPROPERTY(EditAnywhere)
	uint16 MaximumNumberOfOpusVoices;

public:
	AKAUDIO_API FAkXSXAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXSXAdvancedInitializationSettings) { return 0; }
