#pragma once
#include "CoreMinimal.h"
#include "AkAcousticSurface.h"
#include "UObject/NoExportTypes.h"
#include "AkTriangle.h"
#include "AkGeometryData.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FAkGeometryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FAkAcousticSurface> Surfaces;
    
    UPROPERTY()
    TArray<FAkTriangle> Triangles;
    
    AKAUDIO_API FAkGeometryData();
};

