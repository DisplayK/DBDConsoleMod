#include "AtlantaTutorialTallyData.h"

FAtlantaTutorialTallyData::FAtlantaTutorialTallyData()
{
	this->IsKiller = false;
	this->FirstTimeCompleted = false;
	this->BloodpointsScore = 0;
	this->AuricCells = 0;
	this->FearTokens = 0;
	this->Characters = TArray<FName>();
}
