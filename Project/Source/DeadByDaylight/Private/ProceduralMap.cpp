#include "ProceduralMap.h"

FProceduralMap::FProceduralMap()
{
	this->MapId = NAME_None;
	this->Name = FText::GetEmpty();
	this->ThemeName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->HookMinDistance = 0.0f;
	this->HookMinCount = 0;
	this->HookMaxCount = 0;
	this->BookShelvesMinDistance = 0.0f;
	this->BookShelvesMinCount = 0;
	this->BookShelvesMaxCount = 0;
	this->LivingWorldObjectsMinCount = 0;
	this->LivingWorldObjectsMaxCount = 0;
	this->ThumbnailPath = TEXT("");
	this->SortingIndex = 0;
	this->DlcIDString = TEXT("");
	this->FixedLayoutSeed = TArray<int32>();
	this->IsInNonViolentBuild = false;
	this->IsLicensed = false;
}
