#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkAudioSession.h"
#include "AkAdvancedInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkIOSInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkIOSInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
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
	UAkIOSInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkIOSInitializationSettings) { return 0; }
