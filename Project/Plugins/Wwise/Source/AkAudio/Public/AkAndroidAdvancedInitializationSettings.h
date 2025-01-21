#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkAndroidAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkAndroidAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 AudioAPI;

	UPROPERTY(EditAnywhere)
	bool RoundFrameSizeToHardwareSize;

public:
	AKAUDIO_API FAkAndroidAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkAndroidAdvancedInitializationSettings) { return 0; }
