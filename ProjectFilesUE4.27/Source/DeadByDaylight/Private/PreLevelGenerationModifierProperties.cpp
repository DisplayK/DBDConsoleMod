#include "PreLevelGenerationModifierProperties.h"

FPreLevelGenerationModifierProperties::FPreLevelGenerationModifierProperties()
{
	this->ModifierID = NAME_None;
	this->ModifierType = EPreLevelGenerationModifierType::None;
	this->KillerAbiliy = EKillerAbilities::VE_None;
	this->ModifierValue = 0.0f;
}
