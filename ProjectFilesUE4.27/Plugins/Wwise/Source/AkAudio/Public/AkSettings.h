#pragma once

#include "CoreMinimal.h"
#include "AkGeometrySurfacePropertiesToMap.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AkAcousticTextureParams.h"
#include "UObject/SoftObjectPtr.h"
#include "AkSettings.generated.h"

class UPhysicalMaterial;
class UAkAuxBus;
class UAkRtpc;
class UAkAudioEvent;

UCLASS()
class AKAUDIO_API UAkSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint8 MaxSimultaneousReverbVolumes;

	UPROPERTY(EditAnywhere)
	FFilePath WwiseProjectPath;

	UPROPERTY(EditAnywhere)
	FDirectoryPath WwiseSoundDataFolder;

	UPROPERTY()
	bool bAutoConnectToWAAPI_DEPRECATED;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;

	UPROPERTY(EditAnywhere)
	float GlobalDecayAbsorption;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;

	UPROPERTY(EditAnywhere)
	TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;

	UPROPERTY(EditAnywhere)
	FString HFDampingName;

	UPROPERTY(EditAnywhere)
	FString DecayEstimateName;

	UPROPERTY(EditAnywhere)
	FString TimeToFirstReflectionName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkRtpc> HFDampingRTPC;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;

	UPROPERTY()
	TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap;

	UPROPERTY(EditAnywhere)
	bool SplitSwitchContainerMedia;

	UPROPERTY(EditAnywhere)
	bool SplitMediaPerFolder;

	UPROPERTY(EditAnywhere)
	bool UseEventBasedPackaging;

	UPROPERTY()
	bool EnableAutomaticAssetSynchronization_DEPRECATED;

	UPROPERTY(EditAnywhere)
	FString CommandletCommitMessage;

	UPROPERTY(EditAnywhere)
	TMap<FString, FString> UnrealCultureToWwiseCulture;

	UPROPERTY()
	bool AskedToUseNewAssetManagement;

	UPROPERTY()
	bool bEnableMultiCoreRendering_DEPRECATED;

	UPROPERTY()
	bool MigratedEnableMultiCoreRendering;

	UPROPERTY()
	bool FixupRedirectorsDuringMigration;

	UPROPERTY()
	FDirectoryPath WwiseWindowsInstallationPath_DEPRECATED;

	UPROPERTY()
	FFilePath WwiseMacInstallationPath_DEPRECATED;

public:
	UAkSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkSettings) { return 0; }
