#pragma once

#include "CoreMinimal.h"
#include "EBloodwebDefinitionContentType.generated.h"

UENUM(BlueprintType)
enum class EBloodwebDefinitionContentType : uint8
{
	Empty,
	Nodes,
	Paths,
	NodesAndPaths,
	NodesNoPath = 1,
};
