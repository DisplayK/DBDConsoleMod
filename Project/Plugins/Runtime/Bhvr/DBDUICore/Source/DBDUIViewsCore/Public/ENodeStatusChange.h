#pragma once

#include "CoreMinimal.h"
#include "ENodeStatusChange.generated.h"

UENUM(BlueprintType)
enum class ENodeStatusChange : uint8
{
	NodeQuestActivate,
	NodeQuestPaused,
	NodeQuestUnlock,
	NodeRewardAvailableForClaim,
	NodeQuestClaimed,
	None,
};
