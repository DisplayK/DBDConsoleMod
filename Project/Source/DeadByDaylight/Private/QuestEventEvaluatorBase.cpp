#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UQuestEventEvaluatorBase::OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UQuestEventEvaluatorBase::UQuestEventEvaluatorBase()
{
	this->_dbdPlayer = NULL;
	this->_conditionNeedsType = EConditionNeedsType::AllTrue;
	this->_evaluatorConditionsClass = TArray<TSubclassOf<UEvaluatorCondition>>();
	this->_evaluatorConditions = TArray<UEvaluatorCondition*>();
}
