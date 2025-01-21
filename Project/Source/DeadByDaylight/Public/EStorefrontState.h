#pragma once

#include "CoreMinimal.h"
#include "EStorefrontState.generated.h"

UENUM(BlueprintType)
enum class EStorefrontState : uint8
{
	None,
	Character,
	Currency,
	Customization,
	Featured,
	PromoPacks,
	ShrineOfSecrets,
	Subscriptions,
	LandingPage,
	Count,
};
