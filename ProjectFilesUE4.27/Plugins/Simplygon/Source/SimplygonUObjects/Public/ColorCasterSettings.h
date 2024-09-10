#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EFillMode.h"
#include "EOutputOpacityType.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EOutputImageFileFormat.h"
#include "ColorCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FColorCasterSettings
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
	uint8 BakeOpacityInAlpha : 1;

	UPROPERTY()
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY()
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputOpacityType OutputOpacityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SkipCastingIfNoInputChannel : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 OutputSRGB : 1;

public:
	SIMPLYGONUOBJECTS_API FColorCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FColorCasterSettings) { return 0; }
