#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlindingFXComponent.generated.h"

class UPostProcessComponent;
class UMaterialInstanceDynamic;
class UCurveFloat;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindingFXComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FName _blindnessIntensityParameter;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _blindnessMaterialCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _blindnessCurve;

	UPROPERTY(Export)
	UPostProcessComponent* _postProcess;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _postProcessMaterial;

public:
	UFUNCTION(BlueprintCallable)
	void SetPostProcessMaterial(UMaterialInstanceDynamic* value);

	UFUNCTION(BlueprintCallable)
	void SetPostProcess(UPostProcessComponent* value);

public:
	UBlindingFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlindingFXComponent) { return 0; }
