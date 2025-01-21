#include "GameplayModifierData.h"

FGameplayModifierData::FGameplayModifierData()
{
	this->Conditions = TArray<TSubclassOf<UBaseModifierCondition>>();
	this->Modifiers = TArray<FGamePlayModifier>();
	this->TaggedFlags = TArray<FGameplayTag>();
}
