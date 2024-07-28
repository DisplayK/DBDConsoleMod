#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampColorPoint.generated.h"

class UHoudiniParameterChoice;
class UHoudiniParameterColor;
class UHoudiniParameterFloat;

UCLASS(DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColorPoint : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Position;

	UPROPERTY()
	FLinearColor Value;

	UPROPERTY()
	EHoudiniRampInterpolationType Interpolation;

	UPROPERTY()
	int32 InstanceIndex;

	UPROPERTY(Export)
	UHoudiniParameterFloat* PositionParentParm;

	UPROPERTY(Export)
	UHoudiniParameterColor* ValueParentParm;

	UPROPERTY(Export)
	UHoudiniParameterChoice* InterpolationParentParm;

public:
	UHoudiniParameterRampColorPoint();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampColorPoint) { return 0; }
