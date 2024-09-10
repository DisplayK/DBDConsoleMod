#pragma once

#include "CoreMinimal.h"
#include "ESettingScreenButtonData.generated.h"

UENUM(BlueprintType)
enum class ESettingScreenButtonData : uint8
{
	PRIVACY,
	EULA,
	CREDITS,
	SURVIVORTUTORIAL,
	KILLERTUTORIAL,
	SURVIVORCINEMATIC,
	KILLERCINEMATIC,
	LORECINEMATIC,
	COMMUNITY,
	PLAYERCLOUDID,
	SUBSCRIBE,
	TERMSOFUSE,
};
