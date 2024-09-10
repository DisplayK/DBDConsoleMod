#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkAudioSession.h"
#include "AkAdvancedInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkTVOSInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkTVOSInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkAudioSession AudioSession;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkAdvancedInitializationSettings AdvancedSettings;

public:
	UAkTVOSInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkTVOSInitializationSettings) { return 0; }
