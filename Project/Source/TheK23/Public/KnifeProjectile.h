#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "UObject/NoExportTypes.h"
#include "LaunchInfo.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "KnifeProjectile.generated.h"

class UPrimitiveComponent;
class UPoolableProjectileComponent;
class ADBDPlayer;
class AActor;

UCLASS()
class AKnifeProjectile : public AKillerProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _worldCollider;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _camperDetector;

private:
	UPROPERTY()
	TSet<ADBDPlayer*> _playersAffectedThisThrow;

	UPROPERTY(Export)
	UPoolableProjectileComponent* _poolableActorComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _knifeMaxRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _addonExplosionRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numberOfAddonBounces;

public:
	UFUNCTION(BlueprintPure)
	bool WasLaunchedDuringSuperMode() const;

	UFUNCTION(BlueprintPure)
	bool ShouldPlayRicochetSound() const;

protected:
	UFUNCTION(BlueprintCallable)
	void SetKnifeAcquired(bool acquired);

private:
	UFUNCTION()
	void OnWorldColliderHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

	UFUNCTION()
	void OnProjectileBounce(const FHitResult& impactResult, const FVector& impactVelocity);

public:
	UFUNCTION(BlueprintPure)
	bool KnifeCanPierceCampers() const;

	UFUNCTION(BlueprintPure)
	float GetAddonExplosionRadius() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetKnifeActive(bool active);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_OnLaunchCosmetic(FLaunchInfo launchInfo, bool hasImpactOnLaunch);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void BP_CosmeticOnAddonExplosion(const FVector& location, const FVector& normal);

public:
	AKnifeProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AKnifeProjectile) { return 0; }
