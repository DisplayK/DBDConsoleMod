#include "ArchiveQuestSpecialBehaviour.h"

FArchiveQuestSpecialBehaviour::FArchiveQuestSpecialBehaviour()
{
	this->Description = FText::GetEmpty();
	this->Type = EContextualType::None;
	this->SpawnObjectId = NAME_None;
	this->AdditiveBehaviour = EAdditiveBehaviour::AddValues;
	this->StackableBehaviour = EStackingBehaviours::Stackable;
	this->OwnershipBehaviour = EOwnershipBehaviour::Personal;
	this->SpawnQuantity = 0;
}
