#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodDecalEffect.generated.h"

class UCurveFloat;
class UBloodDecalEffectIntensity;
class UTexture2D;
class UMaterialInterface;

UCLASS()
class UBloodDecalEffect : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UCurveFloat* AnimationTimelineCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DestroyTimelineCurve;

	UPROPERTY(EditAnywhere)
	TArray<UTexture2D*> Textures;

	UPROPERTY(EditAnywhere)
	TArray<UTexture2D*> Normals;

	UPROPERTY(EditAnywhere)
	bool EnableVisualEffects;

	UPROPERTY(EditAnywhere)
	UBloodDecalEffectIntensity* BloodDecalEffectIntensity;

	UPROPERTY(EditAnywhere)
	float ColorInterpolationSpeed;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* DefalultDecalMaterial;

public:
	UBloodDecalEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBloodDecalEffect) { return 0; }
