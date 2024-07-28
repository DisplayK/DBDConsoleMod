#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContextualQuestUtilities.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class ARCHIVES_API UContextualQuestUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool PlayerHasToCompleteAssociatedQuest(const ADBDPlayer* player, const FName specialBehaviourId);

	UFUNCTION(BlueprintPure)
	static bool PlayerHasAssociatedQuest(const ADBDPlayer* player, const FName specialBehaviourId);

public:
	UContextualQuestUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UContextualQuestUtilities) { return 0; }
