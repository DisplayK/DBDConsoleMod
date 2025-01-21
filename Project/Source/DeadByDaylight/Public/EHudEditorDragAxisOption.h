#pragma once

#include "CoreMinimal.h"
#include "EHudEditorDragAxisOption.generated.h"

UENUM(BlueprintType)
enum class EHudEditorDragAxisOption : uint8
{
	PositiveSide,
	NegativeSide,
	BothSide,
};
