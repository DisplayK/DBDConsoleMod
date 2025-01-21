#pragma once

#include "CoreMinimal.h"
#include "EFriendUIStatus.generated.h"

UENUM(BlueprintType)
enum class EFriendUIStatus : uint8
{
	Offline,
	Online,
	PlayingDBD,
	PendingSentRequest,
	PendingReceivedRequest,
	NotFriend,
	Self,
};
