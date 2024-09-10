#pragma once

#include "CoreMinimal.h"
#include "EDataCreationPreferences.h"
#include "EReductionTargetStopCondition.h"
#include "EReductionHeuristics.h"
#include "ESymmetryAxis.h"
#include "ReductionSettings.generated.h"

USTRUCT(BlueprintType)
struct FReductionSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReductionTargetTriangleRatioEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReductionTargetTriangleRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReductionTargetTriangleCountEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReductionTargetTriangleCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReductionTargetMaxDeviationEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReductionTargetMaxDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReductionTargetOnScreenSizeEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReductionTargetOnScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReductionTargetStopCondition ReductionTargetStopCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReductionHeuristics ReductionHeuristics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeometryImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaterialImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TextureImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShadingImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroupImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VertexColorImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EdgeSetImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SkinningImportance;

	UPROPERTY()
	float CurvatureImportance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CreateGeomorphGeometry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 AllowDegenerateTexCoords : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 KeepSymmetry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseAutomaticSymmetryDetection : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseSymmetryQuadRetriangulator : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESymmetryAxis SymmetryAxis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SymmetryOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SymmetryDetectionTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDataCreationPreferences DataCreationPreferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 GenerateGeomorphData : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutwardMoveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InwardMoveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxEdgeLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseHighQualityNormalCalculation : 1;

	UPROPERTY()
	int32 ProcessSelectionSetID;

	UPROPERTY()
	FString ProcessSelectionSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MergeGeometries : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 KeepUnprocessedSceneMeshes : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 LockGeometricBorder : 1;

public:
	SIMPLYGONUOBJECTS_API FReductionSettings();
};

FORCEINLINE uint32 GetTypeHash(const FReductionSettings) { return 0; }
