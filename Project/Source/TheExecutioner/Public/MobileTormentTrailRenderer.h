#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TormentTrailPointInfo.h"
#include "MobileTormentTrailRenderer.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class ABaseTormentTrailPoint;

UCLASS()
class THEEXECUTIONER_API AMobileTormentTrailRenderer : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	UInstancedStaticMeshComponent* _pillarIsmComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UInstancedStaticMeshComponent* _wireIsmComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UInstancedStaticMeshComponent* _trailIsmComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UInstancedStaticMeshComponent* _pillarOutlineIsmComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UInstancedStaticMeshComponent* _wireOutlineIsmComponent;

	UPROPERTY(Transient)
	TMap<ABaseTormentTrailPoint*, FTormentTrailPointInfo> _instanceMap;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _trailMaterialInstanceDynamic;

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveInstance(ABaseTormentTrailPoint* trailPoint);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddInstance(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint);

public:
	AMobileTormentTrailRenderer();
};

FORCEINLINE uint32 GetTypeHash(const AMobileTormentTrailRenderer) { return 0; }
