#pragma once

#include "CoreMinimal.h"
#include "ELeaveLobbyReason.generated.h"

UENUM(BlueprintType)
enum class ELeaveLobbyReason : uint8
{
	eNone,
	eNetworkDisconnect,
	eProfileOffline,
	eAppSuspended,
	eInternetDisconnect,
	eHostDisconnect,
	eDLCInstalled,
	eTrialExtensionExpired,
	ePartyManagementError,
};
