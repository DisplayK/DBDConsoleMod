#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFloat.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterFloat : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<float> Values;

	UPROPERTY()
	TArray<float> DefaultValues;

	UPROPERTY()
	FString Unit;

	UPROPERTY()
	bool bNoSwap;

	UPROPERTY()
	bool bHasMin;

	UPROPERTY()
	bool bHasMax;

	UPROPERTY()
	bool bHasUIMin;

	UPROPERTY()
	bool bHasUIMax;

	UPROPERTY()
	bool bIsLogarithmic;

	UPROPERTY()
	float Min;

	UPROPERTY()
	float Max;

	UPROPERTY()
	float UIMin;

	UPROPERTY()
	float UIMax;

	UPROPERTY()
	bool bIsChildOfRamp;

public:
	UHoudiniParameterFloat();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFloat) { return 0; }
