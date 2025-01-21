#pragma once

#include "CoreMinimal.h"
#include "ERoleSelectionScreenButton.generated.h"

UENUM(BlueprintType)
enum class ERoleSelectionScreenButton : uint8
{
	DailyRitual,
	Inbox,
	InviteFriend,
	Setting,
	Marketing,
	Events,
};
