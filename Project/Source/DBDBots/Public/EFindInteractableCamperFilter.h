#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableCamperFilter.generated.h"

UENUM(BlueprintType)
enum class EFindInteractableCamperFilter : uint8
{
	Crawling,
	Standing,
	GiveHelp,
	RequestHelp,
	RescuableBeingCarried,
};
