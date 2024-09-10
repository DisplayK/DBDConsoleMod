#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MaterialOriginalState.h"
#include "UObject/NoExportTypes.h"
#include "ClipManager.generated.h"

class UDBDClipRegionComponent;
class UMaterialInterface;
class UDataTable;
class UMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API AClipManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UDBDClipRegionComponent*> _clippingZones;

	UPROPERTY(Transient, Export)
	TSet<UMeshComponent*> _meshComponents;

	UPROPERTY(Transient)
	TArray<FMaterialOriginalState> _dissolvedMeshes;

	UPROPERTY(Transient)
	TMap<UMaterialInterface*, UMaterialInterface*> _normal2dissolve;

	UPROPERTY(Transient)
	TMap<UMaterialInterface*, UMaterialInterface*> _dissolve2normal;

	UPROPERTY(Transient)
	UDataTable* _sphericalDissolveMaterials;

public:
	UFUNCTION(BlueprintCallable)
	void SphericalDissolveAt(FVector Location, float radius);

	UFUNCTION(BlueprintCallable)
	void RemoveDissolveMaterials();

public:
	AClipManager();
};

FORCEINLINE uint32 GetTypeHash(const AClipManager) { return 0; }
