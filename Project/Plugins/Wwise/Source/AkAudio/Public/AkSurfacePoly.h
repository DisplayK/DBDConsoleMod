#pragma once

#include "CoreMinimal.h"
#include "AkSurfacePoly.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkSurfacePoly
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAcousticTexture* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Occlusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableSurface;

private:
	UPROPERTY()
	float SurfaceArea;

public:
	AKAUDIO_API FAkSurfacePoly();
};

FORCEINLINE uint32 GetTypeHash(const FAkSurfacePoly) { return 0; }
