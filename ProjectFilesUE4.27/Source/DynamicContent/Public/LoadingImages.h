#pragma once

#include "CoreMinimal.h"
#include "LoadingImagesHintInfo.h"
#include "Styling/SlateBrush.h"
#include "LoadingImages.generated.h"

USTRUCT()
struct FLoadingImages
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FName ID;

	UPROPERTY(Transient)
	TArray<FSlateBrush> Images;

	UPROPERTY(Transient)
	TArray<FLoadingImagesHintInfo> ImagesHintInfo;

	UPROPERTY(Transient)
	bool IsAvailableForSurvivor;

	UPROPERTY(Transient)
	bool IsAvailableForKiller;

	UPROPERTY(Transient)
	bool IsGenericImages;

public:
	DYNAMICCONTENT_API FLoadingImages();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImages) { return 0; }
