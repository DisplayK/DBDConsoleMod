#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodOrbInfo.h"
#include "MobileBloodOrbRenderer.generated.h"

class UBloodOrbVisibilityComponent;
class UMaterialInstance;
class UInstancedStaticMeshComponent;
class ABloodOrb;
class UMaterialInstanceDynamic;

UCLASS()
class THEONI_API AMobileBloodOrbRenderer : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UMaterialInstance* OrbMaterialInstance;

	UPROPERTY(EditAnywhere)
	UMaterialInstance* OutlineMaterialInstance;

	UPROPERTY(EditAnywhere)
	float CullInterval;

private:
	UPROPERTY(Transient, Export)
	UInstancedStaticMeshComponent* _ismComponent;

	UPROPERTY(Transient, Export)
	UInstancedStaticMeshComponent* _outlineIsmComponent;

	UPROPERTY(Transient)
	TMap<ABloodOrb*, FBloodOrbInfo> _instanceMap;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _outlineMaterialInstanceDynamic;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _orbMaterialInstanceDynamic;

	UPROPERTY(Transient, Export)
	UBloodOrbVisibilityComponent* _bloodOrbVisibilityComponent;

public:
	AMobileBloodOrbRenderer();
};

FORCEINLINE uint32 GetTypeHash(const AMobileBloodOrbRenderer) { return 0; }
