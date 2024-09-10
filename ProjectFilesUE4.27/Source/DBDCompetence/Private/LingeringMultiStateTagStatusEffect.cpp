#include "LingeringMultiStateTagStatusEffect.h"

ULingeringMultiStateTagStatusEffect::ULingeringMultiStateTagStatusEffect()
{
	this->_ownerStateTag = TArray<FGameplayTag>();
	this->_strategy = EMultiLingeringStateTagStrategy::And;
}
