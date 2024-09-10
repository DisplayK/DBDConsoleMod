#pragma once

#include "CoreMinimal.h"
#include "NormalCalculationSettings.generated.h"

USTRUCT(BlueprintType)
struct FNormalCalculationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReplaceNormals : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReplaceTangents : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HardEdgeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RepairInvalidNormals : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReorthogonalizeTangentSpace : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ScaleByArea : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ScaleByAngle : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SnapNormalsToFlatSurfaces : 1;

public:
	SIMPLYGONUOBJECTS_API FNormalCalculationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FNormalCalculationSettings) { return 0; }
