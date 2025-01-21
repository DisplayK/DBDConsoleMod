#pragma once

#include "CoreMinimal.h"
#include "EGeometryDataFieldType.generated.h"

UENUM(BlueprintType)
enum class EGeometryDataFieldType : uint8
{
	Coords,
	TexCoords,
	Normals,
	Tangents,
	Bitangents,
	Colors,
	TriangleIds,
	MaterialIds,
};
