#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "RemeshingSettings.h"
#include "BoneSettings.h"
#include "GeometryCullingSettings.h"
#include "VisibilitySettings.h"
#include "MappingImageSettings.h"
#include "RemeshingPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FRemeshingPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemeshingSettings RemeshingSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBoneSettings BoneSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGeometryCullingSettings GeometryCullingSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVisibilitySettings VisibilitySettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FRemeshingPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FRemeshingPipelineSettings) { return 0; }
