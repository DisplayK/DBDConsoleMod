#include "ArchiveTomeSkinUIDataRow.h"

FArchiveTomeSkinUIDataRow::FArchiveTomeSkinUIDataRow()
{
	this->menuState = EArchiveMenuState::CurrentTome;
	this->ArchiveSkinData = FArchiveTomeSkinData{};
}
