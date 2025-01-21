#include "HoudiniGeoPartObject.h"

FHoudiniGeoPartObject::FHoudiniGeoPartObject()
{
	this->AssetId = 0;
	this->AssetName = TEXT("");
	this->ObjectId = 0;
	this->ObjectName = TEXT("");
	this->GeoId = 0;
	this->PartId = 0;
	this->PartName = TEXT("");
	this->bHasCustomPartName = false;
	this->SplitGroups = TArray<FString>();
	this->TransformMatrix = FTransform{};
	this->NodePath = TEXT("");
	this->Type = EHoudiniPartType::Invalid;
	this->InstancerType = EHoudiniInstancerType::Invalid;
	this->VolumeName = TEXT("");
	this->VolumeTileIndex = 0;
	this->bIsVisible = false;
	this->bIsEditable = false;
	this->bIsTemplated = false;
	this->bIsInstanced = false;
	this->bHasGeoChanged = false;
	this->bHasPartChanged = false;
	this->bHasTransformChanged = false;
	this->bHasMaterialsChanged = false;
	this->AllMeshSockets = TArray<FHoudiniMeshSocket>();
}
