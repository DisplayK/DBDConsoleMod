#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWinGDKAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkWinGDKAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool UseHeadMountedDisplayAudioDevice;

public:
	AKAUDIO_API FAkWinGDKAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkWinGDKAdvancedInitializationSettings) { return 0; }
