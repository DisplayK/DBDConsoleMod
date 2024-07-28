#pragma once

#include "CoreMinimal.h"
#include "EArchiveStoryType.generated.h"

UENUM(BlueprintType)
enum class EArchiveStoryType : uint8
{
	NotSet,
	CurrentStory,
	PastStory,
	EventStory,
};
