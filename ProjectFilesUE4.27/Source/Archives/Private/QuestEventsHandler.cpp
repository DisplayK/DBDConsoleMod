#include "QuestEventsHandler.h"
#include "GameplayTagContainer.h"
#include "EGameState.h"
#include "EEndGameReason.h"
#include "GameEventData.h"

class ADBDPlayerState;

void UQuestEventsHandler::OnPlayergameStateChanged(ADBDPlayerState* playerState, EGameState gameState)
{

}

void UQuestEventsHandler::OnGameEnded(EEndGameReason reason)
{

}

void UQuestEventsHandler::OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UQuestEventsHandler::DBD_ShowInGameCurrentQuestInfos()
{

}

void UQuestEventsHandler::DBD_InGameAddProgressionToCurrentQuest(const int32 amount)
{

}

UQuestEventsHandler::UQuestEventsHandler()
{
	this->_evaluatorList = TArray<UQuestEventEvaluatorBase*>();
	this->_archiveStoriesContainer = NULL;
}
