#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkCommunicationSettingsWithCommSelection.h"
#include "AkSwitchInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkSwitchInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithCommSelection CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkSwitchInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkSwitchInitializationSettings) { return 0; }
