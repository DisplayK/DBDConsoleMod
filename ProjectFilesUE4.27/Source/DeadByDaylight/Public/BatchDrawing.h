#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticMeshAutoBatch.h"
#include "PerMeshInstancingData.h"
#include "BatchDrawing.generated.h"

class AActor;
class UHISMMaterialHelperSettings;
class UStaticMesh;
class UWorld;

UCLASS()
class UBatchDrawing : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AActor* _actorToSpawnInstancesInto;

	UPROPERTY(Transient)
	TMap<UStaticMesh*, FPerMeshInstancingData> _meshesToInstancingData;

	UPROPERTY(Transient)
	UHISMMaterialHelperSettings* _hismMaterialHelperSettings;

	UPROPERTY(Transient)
	UWorld* _currentWorld;

	UPROPERTY(Transient)
	TArray<FStaticMeshAutoBatch> _meshAutoBatch;

public:
	UBatchDrawing();
};

FORCEINLINE uint32 GetTypeHash(const UBatchDrawing) { return 0; }
