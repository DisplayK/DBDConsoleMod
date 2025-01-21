#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputSplineComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 NumberOfSplineControlPoints;

	UPROPERTY()
	float SplineLength;

	UPROPERTY()
	float SplineResolution;

	UPROPERTY()
	bool SplineClosed;

	UPROPERTY()
	TArray<FTransform> SplineControlPoints;

public:
	UHoudiniInputSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputSplineComponent) { return 0; }
