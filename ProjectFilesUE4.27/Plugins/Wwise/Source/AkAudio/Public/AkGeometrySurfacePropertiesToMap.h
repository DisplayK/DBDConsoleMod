#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AkGeometrySurfacePropertiesToMap.generated.h"

class UAkAcousticTexture;

USTRUCT()
struct FAkGeometrySurfacePropertiesToMap
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;

	UPROPERTY(EditAnywhere)
	float OcclusionValue;

public:
	AKAUDIO_API FAkGeometrySurfacePropertiesToMap();
};

FORCEINLINE uint32 GetTypeHash(const FAkGeometrySurfacePropertiesToMap) { return 0; }
