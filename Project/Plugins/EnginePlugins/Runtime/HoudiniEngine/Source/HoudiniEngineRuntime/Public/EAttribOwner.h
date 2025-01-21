#pragma once

#include "CoreMinimal.h"
#include "EAttribOwner.generated.h"

UENUM()
enum class EAttribOwner : int64
{
	Invalid = -1,
	Vertex,
	Point,
	Prim,
	Detail,
};
