#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotVFXCharmHookCharmData.generated.h"

class UParticleSystem;
class UMaterialInterface;

USTRUCT()
struct FScreenshotVFXCharmHookCharmData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> TargetSystem;

	UPROPERTY(EditAnywhere)
	float VFXWarmupTime;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> TargetMaterial;

	UPROPERTY(EditAnywhere)
	TMap<FName, float> MaterialScalarParameters;

public:
	DEADBYDAYLIGHT_API FScreenshotVFXCharmHookCharmData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotVFXCharmHookCharmData) { return 0; }
