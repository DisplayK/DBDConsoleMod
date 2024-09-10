#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EFillMode.h"
#include "EOutputOpacityType.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EOutputImageFileFormat.h"
#include "OpacityCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FOpacityCasterSettings
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
	uint8 OutputSRGB : 1;

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

public:
	SIMPLYGONUOBJECTS_API FOpacityCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FOpacityCasterSettings) { return 0; }
