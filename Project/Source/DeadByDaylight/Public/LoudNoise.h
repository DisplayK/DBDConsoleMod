#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoudNoise.generated.h"

class UAkComponent;
class USceneComponent;
class UDecalComponent;
class UParticleSystemComponent;

UCLASS()
class DEADBYDAYLIGHT_API ALoudNoise : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDecalComponent* _toInfinityDecal;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	UParticleSystemComponent* _distortionParticleSystem;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAkComponent* _ak_audio_loudNoise;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	USceneComponent* _rootScene;

	UPROPERTY(BlueprintReadOnly)
	float _loudNoiseMinDistance;

private:
	UPROPERTY(EditDefaultsOnly)
	float _loudNoiseLifetime;

	UPROPERTY(EditDefaultsOnly)
	float _heightToAddToLoudNoiseLocation;

	UPROPERTY(EditDefaultsOnly)
	float _loudNoiseDecalDistance;

	UPROPERTY(EditDefaultsOnly)
	float _cameraDecalDistance;

public:
	ALoudNoise();
};

FORCEINLINE uint32 GetTypeHash(const ALoudNoise) { return 0; }
