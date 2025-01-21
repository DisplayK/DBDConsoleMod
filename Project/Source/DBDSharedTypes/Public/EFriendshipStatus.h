#pragma once

#include "CoreMinimal.h"
#include "EFriendshipStatus.generated.h"

UENUM(BlueprintType)
enum class EFriendshipStatus : uint8
{
	None,
	RequestSent,
	RequestReceived,
	Friend,
};
