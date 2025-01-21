#include "EscapeRequirementTracker.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UEscapeRequirementTracker::OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UEscapeRequirementTracker::UEscapeRequirementTracker()
{
	this->_escapeGenerators = TArray<AGenerator*>();
	this->_dbdGameState = NULL;
}
