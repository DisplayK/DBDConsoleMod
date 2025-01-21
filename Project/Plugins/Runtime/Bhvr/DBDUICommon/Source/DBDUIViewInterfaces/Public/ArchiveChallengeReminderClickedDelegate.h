#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ArchiveChallengeReminderClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveChallengeReminderClickedDelegate, EPlayerRole, role);
