#pragma once

#include "CoreMinimal.h"
#include "FoliageSettings.h"
#include "EBillboardMode.h"
#include "UObject/NoExportTypes.h"
#include "BillboardCloudSettings.generated.h"

USTRUCT(BlueprintType)
struct FBillboardCloudSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBillboardMode BillboardMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 FavorVerticalPlanes : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TwoSided : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseVisibilityWeights : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BillboardDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPlaneCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeometricComplexity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFoliageSettings FoliageSettings;

public:
	SIMPLYGONUOBJECTS_API FBillboardCloudSettings();
};

FORCEINLINE uint32 GetTypeHash(const FBillboardCloudSettings) { return 0; }
