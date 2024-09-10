#pragma once

#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "DBDDecalComponent.generated.h"

class UDecalCollection;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UGlassStaticMesh;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDDecalComponent : public UDecalComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	TArray<UStaticMeshComponent*> staticMeshDecals;

	UPROPERTY(Transient, Export)
	TMap<UStaticMeshComponent*, UGlassStaticMesh*> staticMeshGlass;

	UPROPERTY(Transient)
	TArray<UMaterialInstanceDynamic*> materialInstances;

private:
	UPROPERTY(Transient)
	UDecalCollection* _decalCollection;

public:
	UDBDDecalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDecalComponent) { return 0; }
