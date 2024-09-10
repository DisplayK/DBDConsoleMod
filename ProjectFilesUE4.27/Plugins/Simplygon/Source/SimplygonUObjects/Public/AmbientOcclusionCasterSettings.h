#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputImageFileFormat.h"
#include "AmbientOcclusionCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FAmbientOcclusionCasterSettings
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
	int32 RaysPerPixel;

	UPROPERTY()
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY()
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionFalloff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseSimpleOcclusionMode : 1;

public:
	SIMPLYGONUOBJECTS_API FAmbientOcclusionCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAmbientOcclusionCasterSettings) { return 0; }
