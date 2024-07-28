#pragma once

#include "CoreMinimal.h"
#include "EJoinPartyMethod.generated.h"

UENUM(BlueprintType)
enum class EJoinPartyMethod : uint8
{
	None,
	PlatformInvitation,
	InGameInvitation,
	JoinRequest,
};
