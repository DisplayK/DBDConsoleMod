#pragma once

#include "CoreMinimal.h"
#include "EPlayerDataType.generated.h"

UENUM(BlueprintType)
enum class EPlayerDataType : uint8
{
	None,
	PlayerState,
	SocialPartyMember,
	BotPartyMember,
};
