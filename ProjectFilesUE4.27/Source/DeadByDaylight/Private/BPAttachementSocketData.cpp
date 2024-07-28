#include "BPAttachementSocketData.h"

FBPAttachementSocketData::FBPAttachementSocketData()
{
	this->AccessoryBlueprint = NULL;
	this->SkeletalMesh = NULL;
	this->SocketName = NAME_None;
	this->MaterialsMap = TArray<FMaterialReplacerData>();
	this->ConditionalMaterialReplacer = FConditionalMaterialReplacer{};
}
