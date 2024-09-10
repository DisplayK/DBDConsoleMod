#include "ArchiveNodeGraphViewData.h"

FArchiveNodeGraphViewData::FArchiveNodeGraphViewData()
{
	this->Id = NAME_None;
	this->ViewData = FArchiveNodeViewData{};
	this->Position = FVector2D{};
	this->Neighbors = TArray<FName>();
	this->PathIndices = TArray<int32>();
}
