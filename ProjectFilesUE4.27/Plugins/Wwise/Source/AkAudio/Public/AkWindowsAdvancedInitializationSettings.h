#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWindowsAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkWindowsAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool UseHeadMountedDisplayAudioDevice;

	UPROPERTY(EditAnywhere)
	uint32 MaxSystemAudioObjects;

public:
	AKAUDIO_API FAkWindowsAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkWindowsAdvancedInitializationSettings) { return 0; }
