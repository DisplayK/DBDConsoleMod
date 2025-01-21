#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniInputObject.h"
#include "EHoudiniCurveType.h"
#include "HoudiniInputHoudiniSplineComponent.generated.h"

class UHoudiniSplineComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EHoudiniCurveType CurveType;

	UPROPERTY()
	EHoudiniCurveMethod CurveMethod;

	UPROPERTY()
	bool Reversed;

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UHoudiniSplineComponent* CachedComponent;

public:
	UHoudiniInputHoudiniSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputHoudiniSplineComponent) { return 0; }
