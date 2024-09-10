#include "ArchivesJournal.h"

FArchivesJournal::FArchivesJournal()
{
	this->Title = FText::GetEmpty();
	this->Vignettes = TArray<FArchivesVignettes>();
}
