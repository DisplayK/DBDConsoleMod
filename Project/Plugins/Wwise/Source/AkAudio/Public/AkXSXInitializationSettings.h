#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXSXAdvancedInitializationSettings.h"
#include "AkXSXApuHeapInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXSXInitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkXSXInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkXSXApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkXSXAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXSXInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXSXInitializationSettings) { return 0; }
