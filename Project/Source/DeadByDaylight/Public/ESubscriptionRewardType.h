#pragma once

#include "CoreMinimal.h"
#include "ESubscriptionRewardType.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionRewardType : uint8
{
	None,
	Item,
	AddOn,
	Offering,
	FreeTicket,
	AuricCells,
	BloodPoints,
	IridescentShards,
	Customization,
	Character,
};
