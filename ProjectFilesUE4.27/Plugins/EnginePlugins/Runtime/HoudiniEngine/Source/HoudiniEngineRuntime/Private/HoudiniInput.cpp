#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput()
{
	this->Name = TEXT("");
	this->Label = TEXT("");
	this->Type = EHoudiniInputType::Invalid;
	this->PreviousType = EHoudiniInputType::Invalid;
	this->AssetNodeId = -1;
	this->InputNodeId = -1;
	this->InputIndex = 0;
	this->ParmId = -1;
	this->bIsObjectPathParameter = false;
	this->CreatedDataNodeIds = TArray<int32>();
	this->bHasChanged = false;
	this->bNeedsToTriggerUpdate = false;
	this->Help = TEXT("");
	this->KeepWorldTransform = EHoudiniXformType::None;
	this->bPackBeforeMerge = false;
	this->bImportAsReference = false;
	this->bExportLODs = false;
	this->bExportSockets = false;
	this->bExportColliders = false;
	this->bCookOnCurveChanged = true;
	this->GeometryInputObjects = TArray<UHoudiniInputObject*>();
	this->bStaticMeshChanged = false;
	this->AssetInputObjects = TArray<UHoudiniInputObject*>();
	this->bInputAssetConnectedInHoudini = false;
	this->CurveInputObjects = TArray<UHoudiniInputObject*>();
	this->DefaultCurveOffset = 0.000000;
	this->bAddRotAndScaleAttributesOnCurves = false;
	this->LandscapeInputObjects = TArray<UHoudiniInputObject*>();
	this->bLandscapeHasExportTypeChanged = false;
	this->WorldInputObjects = TArray<UHoudiniInputObject*>();
	this->WorldInputBoundSelectorObjects = TArray<AActor*>();
	this->bIsWorldInputBoundSelector = false;
	this->bWorldInputBoundSelectorAutoUpdate = false;
	this->UnrealSplineResolution = 50.000000;
	this->SkeletalInputObjects = TArray<UHoudiniInputObject*>();
	this->LastInsertedInputs = TArray<UHoudiniInputHoudiniSplineComponent*>();
	this->LastUndoDeletedInputs = TArray<UHoudiniInputObject*>();
	this->bUpdateInputLandscape = false;
	this->LandscapeExportType = EHoudiniLandscapeExportType::Heightfield;
	this->bLandscapeExportSelectionOnly = false;
	this->bLandscapeAutoSelectComponent = false;
	this->bLandscapeExportMaterials = false;
	this->bLandscapeExportLighting = false;
	this->bLandscapeExportNormalizedUVs = false;
	this->bLandscapeExportTileUVs = false;
	this->bCanDeleteHoudiniNodes = true;
}
