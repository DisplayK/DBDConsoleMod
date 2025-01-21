#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXboxOneGDKApuHeapInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXboxOneGDKInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkXboxOneGDKInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXboxOneGDKInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneGDKInitializationSettings) { return 0; }
