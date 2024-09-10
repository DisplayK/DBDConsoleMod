#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveOutputType.h"
#include "EHoudiniCurveType.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniCurveOutputProperties.generated.h"

USTRUCT()
struct FHoudiniCurveOutputProperties
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EHoudiniCurveOutputType CurveOutputType;

	UPROPERTY()
	int32 NumPoints;

	UPROPERTY()
	bool bClosed;

	UPROPERTY()
	EHoudiniCurveType CurveType;

	UPROPERTY()
	EHoudiniCurveMethod CurveMethod;

public:
	HOUDINIENGINERUNTIME_API FHoudiniCurveOutputProperties();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniCurveOutputProperties) { return 0; }
