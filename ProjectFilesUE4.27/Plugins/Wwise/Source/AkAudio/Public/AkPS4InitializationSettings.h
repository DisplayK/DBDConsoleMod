#pragma once

#include "CoreMinimal.h"
#include "AkPS4AdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkCommonInitializationSettings.h"
#include "AkPS4InitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkPS4InitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkPS4AdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION()
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkPS4InitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkPS4InitializationSettings) { return 0; }
