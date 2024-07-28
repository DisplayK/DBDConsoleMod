#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImpostorFromSingleViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FImpostorFromSingleViewSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseTightFitting : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TightFittingDepthOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TwoSided : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ViewDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TexCoordPadding;

public:
	SIMPLYGONUOBJECTS_API FImpostorFromSingleViewSettings();
};

FORCEINLINE uint32 GetTypeHash(const FImpostorFromSingleViewSettings) { return 0; }
