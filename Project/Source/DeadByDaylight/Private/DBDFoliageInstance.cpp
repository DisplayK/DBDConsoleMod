#include "DBDFoliageInstance.h"

FDBDFoliageInstance::FDBDFoliageInstance()
{
	this->BaseId = 0;
	this->ProceduralGuid = FGuid{};
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->PreAlignRotation = FRotator{};
	this->DrawScale3D = FVector{};
	this->ZOffset = 0.0f;
	this->Flags = 0;
}
