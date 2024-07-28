#pragma once

#include "CoreMinimal.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommonInitializationSettingsWithSampleRate.generated.h"

USTRUCT()
struct FAkCommonInitializationSettingsWithSampleRate: public FAkCommonInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 SampleRate;

public:
	AKAUDIO_API FAkCommonInitializationSettingsWithSampleRate();
};

FORCEINLINE uint32 GetTypeHash(const FAkCommonInitializationSettingsWithSampleRate) { return 0; }
