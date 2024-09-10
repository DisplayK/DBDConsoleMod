#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.generated.h"

USTRUCT()
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering: public FAkAdvancedInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool EnableMultiCoreRendering;

public:
	AKAUDIO_API FAkAdvancedInitializationSettingsWithMultiCoreRendering();
};

FORCEINLINE uint32 GetTypeHash(const FAkAdvancedInitializationSettingsWithMultiCoreRendering) { return 0; }
