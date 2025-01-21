#include "TypeFoliageToAutomateDensity.h"

FTypeFoliageToAutomateDensity::FTypeFoliageToAutomateDensity()
{
	this->SourceMesh = NULL;
	this->ReplacementMesh = NULL;
	this->bGenerateOverlaps = false;
	this->bReceiveDecals = false;
	this->bCanCharacterStepOn = ECB_No;
	this->DetailMode = DM_Low;
	this->MinimumFoliageRadius = 0.0f;
}
