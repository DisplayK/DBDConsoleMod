#pragma once

#include "CoreMinimal.h"
#include "EPlayerProfileFilter.generated.h"

UENUM(BlueprintType)
enum class EPlayerProfileFilter : uint8
{
	Wallet,
	PlayerName,
	PlayerLevel,
	PlayerRank,
};
