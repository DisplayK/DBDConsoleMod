#pragma once

#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkWindowsAdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkWindowsInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkWindowsInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkWindowsAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkWindowsInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkWindowsInitializationSettings) { return 0; }
