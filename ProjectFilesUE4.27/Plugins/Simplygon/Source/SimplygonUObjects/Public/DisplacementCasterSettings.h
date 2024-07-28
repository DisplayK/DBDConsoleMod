#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputImageFileFormat.h"
#include "DisplacementCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FDisplacementCasterSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaterialChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOpacityChannelComponent OpacityChannelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDitherType DitherType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFillMode FillMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OpacityChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseMultisampling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceScaling;

	UPROPERTY()
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY()
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 GenerateScalarDisplacement : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 GenerateTangentSpaceDisplacement : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NormalMapTexCoordLevel;

public:
	SIMPLYGONUOBJECTS_API FDisplacementCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDisplacementCasterSettings) { return 0; }
