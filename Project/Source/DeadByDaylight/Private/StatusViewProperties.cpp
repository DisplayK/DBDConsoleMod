#include "StatusViewProperties.h"

FStatusViewProperties::FStatusViewProperties()
{
	this->StatusViewID = NAME_None;
	this->Description = FText::GetEmpty();
	this->DisplayName = FText::GetEmpty();
	this->StatusViewBlueprint = NULL;
	this->StatusType = EStatusEffectType::None;
	this->IconFilePath = TEXT("");
	this->IconAsset = NULL;
	this->PlayIntroAnimmation = false;
}
