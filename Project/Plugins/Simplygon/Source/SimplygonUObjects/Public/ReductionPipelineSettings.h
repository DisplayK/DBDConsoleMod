#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "VertexWeightSettings.h"
#include "ReductionSettings.h"
#include "MappingImageSettings.h"
#include "RepairSettings.h"
#include "BoneSettings.h"
#include "NormalCalculationSettings.h"
#include "VisibilitySettings.h"
#include "ReductionPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FReductionPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FReductionSettings ReductionSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRepairSettings RepairSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNormalCalculationSettings NormalCalculationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVisibilitySettings VisibilitySettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBoneSettings BoneSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVertexWeightSettings VertexWeightSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FReductionPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FReductionPipelineSettings) { return 0; }
