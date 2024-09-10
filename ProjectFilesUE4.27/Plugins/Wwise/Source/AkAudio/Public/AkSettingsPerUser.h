#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AkSettingsPerUser.generated.h"

UCLASS()
class AKAUDIO_API UAkSettingsPerUser : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDirectoryPath WwiseWindowsInstallationPath;

	UPROPERTY(EditAnywhere)
	FFilePath WwiseMacInstallationPath;

	UPROPERTY(EditAnywhere)
	bool EnableAutomaticAssetSynchronization;

	UPROPERTY(EditAnywhere)
	FString WaapiIPAddress;

	UPROPERTY(EditAnywhere)
	uint32 WaapiPort;

	UPROPERTY(EditAnywhere)
	bool bAutoConnectToWAAPI;

	UPROPERTY(EditAnywhere)
	bool AutoSyncSelection;

	UPROPERTY()
	bool SoundDataGenerationSkipLanguage;

public:
	UAkSettingsPerUser();
};

FORCEINLINE uint32 GetTypeHash(const UAkSettingsPerUser) { return 0; }
