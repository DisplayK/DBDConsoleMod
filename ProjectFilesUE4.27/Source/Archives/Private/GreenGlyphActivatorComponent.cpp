#include "GreenGlyphActivatorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UGreenGlyphActivatorComponent::DBD_ShowAuraGreenGlyphsActive(const bool enabled)
{

}

void UGreenGlyphActivatorComponent::Authority_OnActivateGlyphEvents(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UGreenGlyphActivatorComponent::Authority_EndGameScenarioBegins(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UGreenGlyphActivatorComponent::UGreenGlyphActivatorComponent()
{
	this->_greenGlyphComponents = TArray<TWeakObjectPtr<UGreenGlyphComponent>>();
	this->_completedGenerators = TArray<AGenerator*>();
}
