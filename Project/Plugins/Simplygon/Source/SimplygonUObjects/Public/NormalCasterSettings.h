#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputImageFileFormat.h"
#include "NormalCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FNormalCasterSettings
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
	uint8 FlipBackfacingNormals : 1;

	UPROPERTY()
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY()
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 GenerateTangentSpaceNormals : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 FlipGreen : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CalculateBitangentPerFragment : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NormalizeInterpolatedTangentSpace : 1;

public:
	SIMPLYGONUOBJECTS_API FNormalCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FNormalCasterSettings) { return 0; }
