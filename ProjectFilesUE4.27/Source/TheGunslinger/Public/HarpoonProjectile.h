#pragma once

#include "CoreMinimal.h"
#include "GunslingerHarpoon.h"
#include "KillerProjectile.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "HarpoonProjectile.generated.h"

class UPrimitiveComponent;
class UHarpoonProjectileMovementComponent;
class USkeletalMeshComponent;
class UPoolableActorComponent;

UCLASS()
class THEGUNSLINGER_API AHarpoonProjectile : public AKillerProjectile, public IGunslingerHarpoon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _launchDistanceFromCamera;

	UPROPERTY(VisibleAnywhere, Transient, Export)
	UHarpoonProjectileMovementComponent* _movement;

	UPROPERTY(VisibleAnywhere, Export)
	UPrimitiveComponent* _environmentCollider;

	UPROPERTY(VisibleAnywhere, Export)
	UPrimitiveComponent* _targetCollider;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMesh;

	UPROPERTY(VisibleAnywhere, Export)
	UPoolableActorComponent* _poolableActorComponent;

private:
	UFUNCTION()
	void OnHarpoonStop(const FHitResult& result);

public:
	AHarpoonProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonProjectile) { return 0; }
