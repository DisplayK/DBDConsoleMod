#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EHoudiniCurveType.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniEngineCopyPropertiesInterface.h"
#include "EHoudiniCurveMethod.h"
#include "HoudiniSplineComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniSplineComponent : public USceneComponent, public IHoudiniEngineCopyPropertiesInterface
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FTransform> CurvePoints;

	UPROPERTY()
	TArray<FVector> DisplayPoints;

	UPROPERTY()
	TArray<int32> DisplayPointIndexDivider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HoudiniSplineName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClosed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReversed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsHoudiniSplineVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniCurveType CurveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniCurveMethod CurveMethod;

	UPROPERTY()
	bool bIsOutputCurve;

	UPROPERTY()
	bool bCookOnCurveChanged;

private:
	UPROPERTY(Transient, DuplicateTransient)
	bool bHasChanged;

	UPROPERTY(Transient, DuplicateTransient)
	bool bNeedsToTriggerUpdate;

	UPROPERTY()
	bool bIsInputCurve;

	UPROPERTY()
	bool bIsEditableOutputCurve;

	UPROPERTY(Transient, DuplicateTransient)
	int32 NodeId;

	UPROPERTY()
	FString PartName;

public:
	UHoudiniSplineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniSplineComponent) { return 0; }
