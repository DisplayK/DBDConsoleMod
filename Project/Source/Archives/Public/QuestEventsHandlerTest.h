#pragma once

#include "CoreMinimal.h"
#include "QuestEventsHandler.h"
#include "QuestEventsHandlerTest.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UQuestEventsHandlerTest : public UQuestEventsHandler
{
	GENERATED_BODY()

private:
	UPROPERTY()
	ADBDPlayer* _dbdplayer;

public:
	UQuestEventsHandlerTest();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventsHandlerTest) { return 0; }
