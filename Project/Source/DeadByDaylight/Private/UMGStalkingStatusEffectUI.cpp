#include "UMGStalkingStatusEffectUI.h"

UUMGStalkingStatusEffectUI::UUMGStalkingStatusEffectUI()
{
	this->StalkedCanvas = NULL;
	this->StalkingFillFull = NULL;
	this->StalkingFillLines = NULL;
	this->StalkingRedBackground = NULL;
	this->StalkingStartAnimationName = TEXT("StalkingStartAnimation");
	this->_stalkingFillFullMI = NULL;
	this->_stalkingFillLinesMI = NULL;
}
