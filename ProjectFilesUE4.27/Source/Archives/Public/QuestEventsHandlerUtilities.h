#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestEventsHandlerUtilities.generated.h"

class UQuestEventsHandler;

UCLASS(BlueprintType)
class ARCHIVES_API UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void InitializeQuestEventHandler(UQuestEventsHandler* questEventsHandler);

public:
	UQuestEventsHandlerUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventsHandlerUtilities) { return 0; }
