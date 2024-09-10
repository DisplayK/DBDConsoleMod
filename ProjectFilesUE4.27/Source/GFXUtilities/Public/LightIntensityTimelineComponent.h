#pragma once

#include "CoreMinimal.h"
#include "LightUpdate.h"
#include "Components/ActorComponent.h"
#include "OnLightTimelineFinished.h"
#include "LightMaterialUpdate.h"
#include "Engine/Scene.h"
#include "LightIntensityTimelineComponent.generated.h"

class UMaterialHelper;
class ULightComponent;
class UCurveFloat;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API ULightIntensityTimelineComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FLightUpdate> lights;

	UPROPERTY(Transient)
	TArray<FLightMaterialUpdate> materialHelpers;

	UPROPERTY(EditAnywhere)
	UCurveFloat* intensityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool randomizeStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool randomizeLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxLength;

	UPROPERTY(EditAnywhere)
	bool normalizeCurve;

	UPROPERTY(EditAnywhere)
	bool startTicking;

	UPROPERTY(EditAnywhere)
	ELightUnits inputLightUnit;

	UPROPERTY(BlueprintAssignable)
	FOnLightTimelineFinished OnTimelineFinished;

public:
	UFUNCTION(BlueprintCallable)
	void SetRandomizeLength(bool isRandom);

	UFUNCTION(BlueprintCallable)
	void SetMinLength(float newMinValue);

	UFUNCTION(BlueprintCallable)
	void SetMaxLength(float newMaxValue);

	UFUNCTION(BlueprintCallable)
	void SetLightToMaxValue();

	UFUNCTION(BlueprintCallable)
	void SetLightCurve(UCurveFloat* lightcurve);

	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintCallable)
	void RegisterForTick();

	UFUNCTION(BlueprintCallable)
	void DeactivateTick();

	UFUNCTION(BlueprintCallable)
	void AddMaterialHelper(UMaterialHelper* matHelper, FName propName, float multiplier);

	UFUNCTION(BlueprintCallable)
	void AddLight(ULightComponent* light, float multiplier);

public:
	ULightIntensityTimelineComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULightIntensityTimelineComponent) { return 0; }
