#pragma once

#include "CoreMinimal.h"
#include "EEndGameReason.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EGameState.h"
#include "GameEventData.h"
#include "QuestEventsHandler.generated.h"

class UArchiveStoriesContainer;
class UQuestEventEvaluatorBase;
class ADBDPlayerState;

UCLASS(meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UQuestEventsHandler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UQuestEventEvaluatorBase*> _evaluatorList;

	UPROPERTY(Transient)
	UArchiveStoriesContainer* _archiveStoriesContainer;

private:
	UFUNCTION()
	void OnPlayergameStateChanged(ADBDPlayerState* playerState, EGameState gameState);

	UFUNCTION()
	void OnGameEnded(EEndGameReason reason);

	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(Exec)
	void DBD_ShowInGameCurrentQuestInfos();

	UFUNCTION(Exec)
	void DBD_InGameAddProgressionToCurrentQuest(const int32 amount);

public:
	UQuestEventsHandler();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventsHandler) { return 0; }
