#pragma once

#include "CoreMinimal.h"
#include "EEditorMode.generated.h"

UENUM(BlueprintType)
enum class EEditorMode : uint8
{
	Node,
	Path,
};
