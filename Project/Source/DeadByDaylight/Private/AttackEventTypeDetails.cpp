#include "AttackEventTypeDetails.h"

FAttackEventTypeDetails::FAttackEventTypeDetails()
{
	this->GameplayTag = FGameplayTag{};
	this->AttackEventType = EAttackEventType::VE_None;
	this->CanBeProtective = false;
	this->AssociatedCharacter = 0;
	this->Description = TEXT("");
}
