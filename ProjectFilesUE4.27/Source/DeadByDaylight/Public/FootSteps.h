#pragma once

#include "CoreMinimal.h"
#include "FootStep.h"
#include "GameFramework/Actor.h"
#include "PerPlatformProperties.h"
#include "UObject/NoExportTypes.h"
#include "FootSteps.generated.h"

class UMaterial;
class UDecalSpawner;
class UCurveFloat;
class UDBDDecalComponent;

UCLASS()
class AFootSteps : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _raycastHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	float _raycastZOffset;

	UPROPERTY(EditDefaultsOnly)
	float _raycastDistance;

	UPROPERTY(EditDefaultsOnly)
	UMaterial* _material;

	UPROPERTY(EditDefaultsOnly)
	float _minimumDecalSize;

	UPROPERTY(EditDefaultsOnly)
	float _maximumDecalSize;

	UPROPERTY(EditDefaultsOnly)
	float _projectionTickness;

	UPROPERTY(EditDefaultsOnly)
	float _visibilityMultiplierInterpSpeed;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _fadeCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _veinsCurve;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _decalPoolSize;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _recycleThresholdPercentage;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _recycleDistancePercentage;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _maxOverlapping;

	UPROPERTY(Transient)
	TMap<UDBDDecalComponent*, FFootStep> _footSteps;

	UPROPERTY(Transient)
	UDecalSpawner* _decalSpawner;

private:
	UFUNCTION()
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	AFootSteps();
};

FORCEINLINE uint32 GetTypeHash(const AFootSteps) { return 0; }
