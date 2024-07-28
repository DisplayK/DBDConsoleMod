#include "HighestLevelAndClosestEffectCondition.h"

void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int32 level)
{

}

void UHighestLevelAndClosestEffectCondition::InitEffectArrays(FName effectIDLevel1, FName effectIDLevel2, FName effectIDLevel3)
{

}

UHighestLevelAndClosestEffectCondition::UHighestLevelAndClosestEffectCondition()
{
	this->_effectsLevel1 = TArray<UStatusEffect*>();
	this->_effectsLevel2 = TArray<UStatusEffect*>();
	this->_effectsLevel3 = TArray<UStatusEffect*>();
}
