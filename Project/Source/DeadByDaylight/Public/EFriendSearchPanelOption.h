#pragma once

#include "CoreMinimal.h"
#include "EFriendSearchPanelOption.generated.h"

UENUM(BlueprintType)
enum class EFriendSearchPanelOption : uint8
{
	NotFoundPanel,
	NonFriendPanel,
	FriendRequestReceivedPanel,
	FriendRequestSentPanel,
	FriendPanel,
	IsOwnerPanel,
};
