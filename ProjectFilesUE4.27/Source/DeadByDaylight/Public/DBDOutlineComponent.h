#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "DBDOutlineRenderStrategySelector.h"
#include "UObject/NoExportTypes.h"
#include "DBDOutlineComponent.generated.h"

class UMaterialInterface;
class UBaseOutlineRenderStrategy;
class UTexture;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDOutlineComponent : public UBatchMeshCommands
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	float InterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool ShouldBeAboveOutlines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool ForceOutlineFarAway;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool LimitToCustomDepthObjects;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Interp)
	bool FadeOutAsClosingIn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Interp)
	bool IsAlwaysVisible;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Interp)
	float MinimumOutlineDistance;

protected:
	UPROPERTY(EditAnywhere)
	FString OutlineName;

private:
	UPROPERTY(Transient)
	FDBDOutlineRenderStrategySelector _renderStrategySelector;

	UPROPERTY(Transient, Export)
	UBatchMeshCommands* _batchMeshCommands;

	UPROPERTY(Transient)
	UBaseOutlineRenderStrategy* _renderingStrategy;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetTargetColor(FLinearColor color);

	UFUNCTION(BlueprintCallable)
	void SetOutlineIntensity(float outlineIntensity);

	UFUNCTION(BlueprintCallable)
	void SetMinimumOutlineDistance(float distance);

	UFUNCTION(BlueprintCallable)
	void SetMaterialCopyTarget(UMaterialInterface* inMaterialToCopy);

	UFUNCTION(BlueprintCallable)
	void SetIsOccludingOutlines(const bool isOccluding);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetFadeTexture(UTexture* inFadeTexture);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetFadeIntensity(float fadeIntensity);

	UFUNCTION(BlueprintCallable)
	void ResetToTransparent();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void RefreshOutlineComponent();

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void InitBatcher();

public:
	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FLinearColor GetTargetColor() const;

public:
	UDBDOutlineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponent) { return 0; }
