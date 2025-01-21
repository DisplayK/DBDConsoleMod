#pragma once

#include "CoreMinimal.h"
#include "EGameType.generated.h"

UENUM(BlueprintType)
enum class EGameType : uint8
{
	Online,
	KillYourFriends,
	Tutorial = 4,
	TutorialBotMatch,
	SecretBotMatch,
	None,
};
