#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "LaunchInfo.h"
#include "EK25ProjectileDeactivateReason.h"
#include "Engine/EngineTypes.h"
#include "K25ProjectileDeactivationData.h"
#include "UObject/NoExportTypes.h"
#include "K25Projectile.generated.h"

class UKillerProjectileDodgeComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AK25Chain;
class UDBDProjectileMovementComponent;

UCLASS(Abstract)
class AK25Projectile : public AKillerProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _staticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _characterCollider;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	UPrimitiveComponent* _environmentCollider;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	UKillerProjectileDodgeComponent* _projectileDodgeComponent;

	UPROPERTY(Transient)
	FLaunchInfo _launchInfo;

	UPROPERTY(Replicated, Transient)
	AK25Chain* _attachedChain;

	UPROPERTY(EditAnywhere)
	float _timeIgnoreSlasherCollision;

private:
	UPROPERTY(Transient)
	bool _isActive;

	UPROPERTY(Transient)
	FK25ProjectileDeactivationData _lastDeactivationData;

public:
	UFUNCTION(Server, Reliable)
	void Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason);

protected:
	UFUNCTION()
	void OnProjectileStopped(const FHitResult& result);

public:
	UFUNCTION(BlueprintPure)
	UDBDProjectileMovementComponent* GetMovementComponent() const;

	UFUNCTION(BlueprintNativeEvent)
	FVector GetChainAttachmentLocation() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileDeactivated(const FK25ProjectileDeactivationData& deactivationData);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileActivated();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Projectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25Projectile) { return 0; }
