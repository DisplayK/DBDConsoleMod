#pragma once

#include "CoreMinimal.h"
#include "AkGeometrySurfaceOverride.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfaceOverride
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAcousticTexture* AcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableOcclusionOverride : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionValue;

private:
	UPROPERTY()
	float SurfaceArea;

public:
	AKAUDIO_API FAkGeometrySurfaceOverride();
};

FORCEINLINE uint32 GetTypeHash(const FAkGeometrySurfaceOverride) { return 0; }
