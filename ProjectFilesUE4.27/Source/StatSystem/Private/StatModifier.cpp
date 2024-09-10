#include "StatModifier.h"

FStatModifier::FStatModifier()
{
	this->OperationStrategy = EModifierOperationStrategy::Add;
	this->ModifierTag = FGameplayTag{};
	this->CompoundStrategy = EModifierCompoundStrategy::Add;
}
