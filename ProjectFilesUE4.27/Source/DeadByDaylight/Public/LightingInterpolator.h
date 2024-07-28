#pragma once

#include "CoreMinimal.h"
#include "InterpolationDoneEvent.h"
#include "UObject/NoExportTypes.h"
#include "LightingInterpolator.generated.h"

class USkyLightComponent;
class ABaseSky;
class UExponentialHeightFogComponent;
class ULightComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULightingInterpolator : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FInterpolationDoneEvent OnInterpolationDone;

private:
	UPROPERTY(Transient)
	ABaseSky* _targetLighting;

public:
	UFUNCTION(BlueprintCallable)
	static void LerpSkylight(USkyLightComponent* Target, USkyLightComponent* A, USkyLightComponent* B, float alpha);

	UFUNCTION(BlueprintCallable)
	static void LerpLight(ULightComponent* Target, ULightComponent* A, ULightComponent* B, float alpha);

	UFUNCTION(BlueprintCallable)
	static void LerpHeightFog(UExponentialHeightFogComponent* Target, const UExponentialHeightFogComponent* A, const UExponentialHeightFogComponent* B, float alpha, float thresholdBeforeSwitchingtoB);

public:
	ULightingInterpolator();
};

FORCEINLINE uint32 GetTypeHash(const ULightingInterpolator) { return 0; }
