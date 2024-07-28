#pragma once

#include "CoreMinimal.h"
#include "EUIActionType.generated.h"

UENUM(BlueprintType)
enum class EUIActionType : uint8
{
	None,
	Accept,
	Cancel,
	Previous,
	Next,
	PreviousSecondary,
	NextSecondary,
	ArchivesSurvivorSlot,
	ArchivesKillerAndSurvivorSlot,
	ArchivesKillerSlot,
	FaceButtonTop,
	Scroll,
};
