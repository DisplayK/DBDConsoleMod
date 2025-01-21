#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/ReflectionCaptureComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDReflectionCaptureSpawnerComponent.generated.h"

class AReflectionCapture;
class UReflectionCaptureComponent;
class UTextureCube;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDReflectionCaptureSpawnerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EReflectionSourceType ReflectionSourceType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTextureCube* Cubemap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float SourceCubemapAngle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ContributionFactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float IBLMultiplicator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCanBeTinted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CaptureOffset;

protected:
	UPROPERTY(Transient)
	TArray<AReflectionCapture*> SpawnedReflectionCaptures;

	UPROPERTY(Transient, Export)
	TArray<UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents;

public:
	UFUNCTION(BlueprintCallable)
	void SetIBLMultiplicator(float IBLMultiplicatorNew);

	UFUNCTION(BlueprintCallable)
	void SetContributionFactor(float contributionFactorNew);

	UFUNCTION(BlueprintCallable)
	void SetBrightness(float brightnessNew);

public:
	UDBDReflectionCaptureSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDReflectionCaptureSpawnerComponent) { return 0; }
