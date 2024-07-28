#pragma once

#include "CoreMinimal.h"
#include "EFeaturedStoreContentType.generated.h"

UENUM(BlueprintType)
enum class EFeaturedStoreContentType : uint8
{
	None,
	Character,
	Customization,
	Outfit,
	Count,
};
