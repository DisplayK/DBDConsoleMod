#pragma once

#include "CoreMinimal.h"
#include "ENewContentType.generated.h"

UENUM(BlueprintType)
enum class ENewContentType : uint8
{
	FEATURED_CONTENT = 1,
	NEW_CONTENT,
	PATCH_NOTES,
	DEV_MESSAGES,
	EVENTS,
	SALE,
	COMMUNITY,
	ZeroEntry = 0,
};
