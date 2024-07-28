#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GeneratorDrivenActor.h"
#include "UObject/NoExportTypes.h"
#include "FlickeringLightType.h"
#include "PerPlatformProperties.h"
#include "FlickeringLight.generated.h"

class ULocalLightComponent;
class UPointLightComponent;
class URectLightComponent;
class ULightIntensityTimelineComponent;
class USpotLightComponent;

UCLASS()
class DEADBYDAYLIGHT_API AFlickeringLight : public AGeneratorDrivenActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FlickeringLightType _lightComponentType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TEnumAsByte<EDetailMode> _detailLevelBeforeCastShadows;

	UPROPERTY()
	FPerPlatformBool _castShadow;

	UPROPERTY(EditAnywhere)
	FPerPlatformBool _isCastingShadow;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _maxDrawDistance;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _maxDistanceFadeRange;

	UPROPERTY(EditAnywhere)
	FPerPlatformBool _castCinematicShadowsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _innerConneAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _outerConneAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _sourceLength;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _sourceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _intensity;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _generatorActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isTimelineSpeedRandom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumTimelimeSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumTimelimeSpeed;

	UPROPERTY(EditAnywhere)
	FPerPlatformBool _secondaryLightVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _secondaryLightIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FVector _secondaryLightTransform;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FRotator _secondaryLightRotation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _secondaryLightAttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FLinearColor _secondaryLightColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _secondaryLightSpecularScale;

	UPROPERTY(EditAnywhere)
	uint8 _isAlwaysCapturedAsON : 1;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULightIntensityTimelineComponent* _lightIntensityTimeline;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPointLightComponent* _pointLightComponent;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPointLightComponent* _secondaryPointLightComponent;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	URectLightComponent* _rectLightComponent;

	UPROPERTY(BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USpotLightComponent* _spotLightComponent;

protected:
	UFUNCTION(BlueprintCallable)
	void StopFlickering();

	UFUNCTION(BlueprintCallable)
	void StartFlickering();

	UFUNCTION(BlueprintCallable)
	void Init();

public:
	UFUNCTION(BlueprintCallable)
	bool GetSecondaryLightVisibilty();

	UFUNCTION(BlueprintCallable)
	ULocalLightComponent* GetSecondaryLightComponent();

	UFUNCTION(BlueprintCallable)
	ULocalLightComponent* GetActiveLightComponent();

public:
	AFlickeringLight();
};

FORCEINLINE uint32 GetTypeHash(const AFlickeringLight) { return 0; }
