#include "ArchiveMapPathViewData.h"

FArchiveMapPathViewData::FArchiveMapPathViewData()
{
	this->StartPositon = FVector2D{};
	this->EndPositon = FVector2D{};
	this->StartNodeId = NAME_None;
	this->EndNodeId = NAME_None;
	this->Status = EArchivePathStatus::Closed;
}
