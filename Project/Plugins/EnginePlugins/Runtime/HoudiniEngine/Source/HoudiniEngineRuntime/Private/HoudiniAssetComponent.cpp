#include "HoudiniAssetComponent.h"

UHoudiniAssetComponent::UHoudiniAssetComponent()
{
	this->HoudiniAsset = NULL;
	this->bCookOnParameterChange = true;
	this->bUploadTransformsToHoudiniEngine = true;
	this->bCookOnTransformChange = false;
	this->bCookOnAssetInputCook = true;
	this->bOutputless = false;
	this->bOutputTemplateGeos = false;
	this->bUseOutputNodes = false;
	this->StaticMeshMethod = EHoudiniStaticMeshMethod::RawMesh;
	this->bOverrideGlobalProxyStaticMeshSettings = false;
	this->bEnableProxyStaticMeshOverride = false;
	this->bEnableProxyStaticMeshRefinementByTimerOverride = true;
	this->ProxyMeshAutoRefineTimeoutSecondsOverride = 10.000000;
	this->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = true;
	this->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = true;
	this->AssetId = -1;
	this->NodeIdsToCook = TArray<int32>();
	this->DownstreamHoudiniAssets = TSet<UHoudiniAssetComponent*>();
	this->HapiAssetName = TEXT("");
	this->AssetState = EHoudiniAssetState::NeedInstantiation;
	this->DebugLastAssetState = EHoudiniAssetState::NeedInstantiation;
	this->AssetStateResult = EHoudiniAssetStateResult::None;
	this->SubAssetIndex = 4294967295;
	this->AssetCookCount = 0;
	this->bHasBeenLoaded = false;
	this->bHasBeenDuplicated = false;
	this->bPendingDelete = false;
	this->bRecookRequested = false;
	this->bRebuildRequested = false;
	this->bEnableCooking = true;
	this->bForceNeedUpdate = false;
	this->bLastCookSuccess = false;
	this->bParameterDefinitionUpdateNeeded = false;
	this->bBlueprintStructureModified = false;
	this->bBlueprintModified = false;
	this->Parameters = TArray<UHoudiniParameter*>();
	this->Inputs = TArray<UHoudiniInput*>();
	this->Outputs = TArray<UHoudiniOutput*>();
	this->BakedOutputs = TArray<FHoudiniBakedOutput>();
	this->UntrackedOutputs = TArray<TWeakObjectPtr<AActor>>();
	this->HandleComponents = TArray<UHoudiniHandleComponent*>();
	this->bHasComponentTransformChanged = false;
	this->bFullyLoaded = false;
	this->PDGAssetLink = NULL;
	this->bNoProxyMeshNextCookRequested = false;
	this->InputPresets = TMap<UObject*, int32>();
	this->bBakeAfterNextCook = false;
	this->bCachedIsPreview = false;
	this->LastTickTime = 0.000000;
}
