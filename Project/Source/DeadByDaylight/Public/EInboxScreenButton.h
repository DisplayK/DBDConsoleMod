#pragma once

#include "CoreMinimal.h"
#include "EInboxScreenButton.generated.h"

UENUM(BlueprintType)
enum class EInboxScreenButton : uint8
{
	Rewards,
	Social,
	News,
	Back,
};
