#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneAdvancedInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneApuHeapInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXboxOneInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkXboxOneInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXboxOneInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneInitializationSettings) { return 0; }
