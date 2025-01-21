#include "ArchivesMapFromS3.h"

FArchivesMapFromS3::FArchivesMapFromS3()
{
	this->Level = TArray<FStoryLevel>();
	this->RiftId = TEXT("");
	this->RiftId_IsSet = false;
	this->SpecialEventId = TEXT("");
	this->SpecialEventId_IsSet = false;
}
