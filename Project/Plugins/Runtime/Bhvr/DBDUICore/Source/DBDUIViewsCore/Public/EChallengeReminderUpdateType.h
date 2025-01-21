#pragma once

#include "CoreMinimal.h"
#include "EChallengeReminderUpdateType.generated.h"

UENUM(BlueprintType)
enum class EChallengeReminderUpdateType : uint8
{
	Reveal,
	Swap,
};
