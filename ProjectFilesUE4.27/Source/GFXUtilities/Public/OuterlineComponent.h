#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OuterlineComponent.generated.h"

class USkeletalMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UOuterlineComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* CloneCustomDepthMaterial;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* CloneTranslucentMaterial;

private:
	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _cloneCustomDepthMaterialDynamic;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _cloneTranslucentMaterialDynamic;

	UPROPERTY(Transient, Export)
	USkeletalMeshComponent* _customDepthSkeletalMesh;

	UPROPERTY(Transient, Export)
	USkeletalMeshComponent* _overlaySkeletalMesh;

public:
	UFUNCTION(BlueprintCallable)
	void SetIntensity(float intensity);

public:
	UOuterlineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOuterlineComponent) { return 0; }
