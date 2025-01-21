#include "OrangeGlyphComponent.h"

class ADBDPlayer;

void UOrangeGlyphComponent::Cosmetic_ApplyNegativeEffects(ADBDPlayer* affectedPlayer)
{

}

UOrangeGlyphComponent::UOrangeGlyphComponent()
{
	this->_numHookedSurvivorsRequired = 6;
	this->_numInactiveHookStatesToDespawn = 7;
	this->_numHookActionsWhileActive = 0;
	this->_hookEvents = TArray<FGameplayTag>();
	this->_hookStateEvents = TArray<FGameplayTag>();
	this->_statusEffectClasses = TArray<TSubclassOf<UStatusEffect>>();
	this->_eventsThatCauseEffects = TArray<FGameplayTag>();
}
