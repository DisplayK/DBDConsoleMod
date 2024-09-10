#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EmblemQualityImages.generated.h"

USTRUCT(BlueprintType)
struct FEmblemQualityImages
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FSlateBrush HighlightImage;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush DarkImage;

public:
	DEADBYDAYLIGHT_API FEmblemQualityImages();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemQualityImages) { return 0; }
