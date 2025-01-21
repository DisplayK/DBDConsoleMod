#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkStadiaInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkStadiaInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

public:
	UAkStadiaInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkStadiaInitializationSettings) { return 0; }
