#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkCommonInitializationSettings.h"
#include "AkPS5AdvancedInitializationSettings.h"
#include "AkPS5InitializationSettings.generated.h"

UCLASS()
class AKAUDIO_API UAkPS5InitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere)
	FAkPS5AdvancedInitializationSettings AdvancedSettings;

public:
	UAkPS5InitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkPS5InitializationSettings) { return 0; }
