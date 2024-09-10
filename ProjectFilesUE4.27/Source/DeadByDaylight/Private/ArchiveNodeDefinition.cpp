#include "ArchiveNodeDefinition.h"

FArchiveNodeDefinition::FArchiveNodeDefinition()
{
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->PlayerRole = EPlayerRole::VE_None;
	this->CinematicId = NAME_None;
}
