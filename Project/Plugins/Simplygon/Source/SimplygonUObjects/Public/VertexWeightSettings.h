#pragma once

#include "CoreMinimal.h"
#include "EWeightsFromColorComponent.h"
#include "EWeightsFromColorMode.h"
#include "VertexWeightSettings.generated.h"

USTRUCT(BlueprintType)
struct FVertexWeightSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseVertexWeightsInReducer : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseVertexWeightsInTexcoordGenerator : 1;

	UPROPERTY()
	FString WeightsFromColorName;

	UPROPERTY()
	int32 WeightsFromColorLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeightsFromColorComponent WeightsFromColorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeightsFromColorMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeightsFromColorMode WeightsFromColorMode;

public:
	SIMPLYGONUOBJECTS_API FVertexWeightSettings();
};

FORCEINLINE uint32 GetTypeHash(const FVertexWeightSettings) { return 0; }
