#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkLinuxInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkLinuxInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
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
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkLinuxInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkLinuxInitializationSettings) { return 0; }
