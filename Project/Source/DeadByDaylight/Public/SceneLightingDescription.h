#pragma once

#include "CoreMinimal.h"
#include "LightingSpecifics.h"
#include "UObject/SoftObjectPtr.h"
#include "SceneLightingDescription.generated.h"

class UTextureCube;

USTRUCT()
struct FSceneLightingDescription
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ThemeName;

	UPROPERTY(EditAnywhere)
	FLightingSpecifics LightingDetailsLowMedium;

	UPROPERTY(EditAnywhere)
	FLightingSpecifics LightingDetailsHighUltra;

	UPROPERTY(EditAnywhere)
	FLightingSpecifics LightingAtlanta;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTextureCube> TextureCube;

public:
	DEADBYDAYLIGHT_API FSceneLightingDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSceneLightingDescription) { return 0; }
