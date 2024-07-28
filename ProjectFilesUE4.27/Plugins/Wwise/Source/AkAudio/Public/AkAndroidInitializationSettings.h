#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAndroidAdvancedInitializationSettings.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAndroidInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkAndroidInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkAndroidAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkAndroidInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkAndroidInitializationSettings) { return 0; }
