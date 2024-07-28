#pragma once

#include "CoreMinimal.h"
#include "EStickerType.generated.h"

UENUM(BlueprintType)
enum class EStickerType : uint8
{
	None,
	Emoji,
	Text,
};
