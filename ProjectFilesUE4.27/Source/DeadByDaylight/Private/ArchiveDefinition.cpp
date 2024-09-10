#include "ArchiveDefinition.h"

FArchiveDefinition::FArchiveDefinition()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->PurchasePassPicturePath = TEXT("");
	this->PurchaseTierPicturePath = TEXT("");
	this->PurchasePassPopupMessage = FText::GetEmpty();
	this->EventStyle = EArchivesEventStyle::None;
	this->StoryBookMarkTexture = NULL;
	this->StyleFrameLabel = TEXT("");
	this->EventStoryLabel = TEXT("");
}
