#pragma once

#include "CoreMinimal.h"
#include "EFriendContainerType.generated.h"

UENUM(BlueprintType)
enum class EFriendContainerType : uint8
{
	Connected,
	Disconnected,
	PendingSentRequest,
	RecentlyPlayed,
	SocialSuggestions,
	PendingReceivedRequest,
	QueriedPlayer,
	Unknown,
};
