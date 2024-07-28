#include "ModifierTickableConditionReplicatedData.h"

FModifierTickableConditionReplicatedData::FModifierTickableConditionReplicatedData()
{
	this->Conditions = TArray<UBaseModifierCondition*>();
	this->HasCondition = false;
	this->AuthorityDataSet = false;
}
