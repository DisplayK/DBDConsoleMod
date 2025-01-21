#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TunableStat.h"
#include "BaseTormentTrailPoint.generated.h"

class USphereComponent;
class USplineMeshComponent;
class UStaticMesh;

UCLASS()
class ABaseTormentTrailPoint : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USphereComponent* _collisionComponent;

	UPROPERTY(EditDefaultsOnly)
	float _collisionRadius;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tormentTrailAliveTime;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	USplineMeshComponent* _splineMeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<UStaticMesh*> _trailMeshList;

	UPROPERTY(BlueprintReadWrite, Transient)
	uint8 _indexInTrail;

protected:
	UFUNCTION(BlueprintCallable)
	void EndOfDisapearCosmetic();

	UFUNCTION(BlueprintImplementableEvent)
	void DisappearCosmetic();

public:
	ABaseTormentTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const ABaseTormentTrailPoint) { return 0; }
