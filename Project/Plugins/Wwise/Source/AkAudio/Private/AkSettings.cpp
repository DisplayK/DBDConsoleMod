#include "AkSettings.h"

UAkSettings::UAkSettings()
{
	this->MaxSimultaneousReverbVolumes = 2;
	this->bAutoConnectToWAAPI_DEPRECATED = false;
	this->DefaultOcclusionCollisionChannel = ECC_Visibility;
	this->DefaultFitToGeometryCollisionChannel = ECC_WorldStatic;
	this->AkGeometryMap = TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap>();
	this->GlobalDecayAbsorption = 0.500000;
	this->DefaultReverbAuxBus = NULL;
	this->EnvironmentDecayAuxBusMap = TMap<float, TSoftObjectPtr<UAkAuxBus>>();
	this->HFDampingName = TEXT("");
	this->DecayEstimateName = TEXT("");
	this->TimeToFirstReflectionName = TEXT("");
	this->HFDampingRTPC = NULL;
	this->DecayEstimateRTPC = NULL;
	this->TimeToFirstReflectionRTPC = NULL;
	this->AudioInputEvent = NULL;
	this->AcousticTextureParamsMap = TMap<FGuid, FAkAcousticTextureParams>();
	this->SplitSwitchContainerMedia = false;
	this->SplitMediaPerFolder = false;
	this->UseEventBasedPackaging = false;
	this->EnableAutomaticAssetSynchronization_DEPRECATED = false;
	this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
	this->UnrealCultureToWwiseCulture = TMap<FString, FString>();
	this->AskedToUseNewAssetManagement = true;
	this->bEnableMultiCoreRendering_DEPRECATED = false;
	this->MigratedEnableMultiCoreRendering = true;
	this->FixupRedirectorsDuringMigration = false;
}
