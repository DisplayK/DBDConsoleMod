#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LaunchInfo.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ImpactInfo.h"
#include "BaseProjectileLauncher.generated.h"

class ABaseProjectile;
class APawn;
class IProjectileProvider;
class UBaseProjectileReplicationComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UBaseProjectileLauncher : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	bool _requireLaunchImpactDetection;

	UPROPERTY(EditDefaultsOnly)
	bool _hasInfiniteAmmunition;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABaseProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Ammo)
	int32 _ammo;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_MaxAmmo)
	int32 _maxAmmo;

	UPROPERTY(Replicated)
	bool _canLaunchWhileOutOfAmmo;

	UPROPERTY(Transient)
	ABaseProjectile* _debugProjectile;

	UPROPERTY(VisibleAnywhere, Export)
	UBaseProjectileReplicationComponent* _projectileReplicationComponent;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetProjectileVar(FName varName, float value);

	UFUNCTION(BlueprintCallable)
	void SetProjectileProvider(TScriptInterface<IProjectileProvider> projectileProvider);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_LaunchWithImpact(const FLaunchInfo& launchInfo, const FImpactInfo& impactInfo, ABaseProjectile* projectile);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Launch(const FLaunchInfo& launchInfo, ABaseProjectile* projectile);

protected:
	UFUNCTION()
	void OnRep_MaxAmmo(int32 oldMaxAmmo);

	UFUNCTION()
	void OnRep_Ammo(int32 oldAmmo);

	UFUNCTION(BlueprintImplementableEvent)
	void OnLaunch(FLaunchInfo launchInfo, ABaseProjectile* projectile);

public:
	UFUNCTION(BlueprintCallable)
	void Local_Launch();

	UFUNCTION(BlueprintPure)
	bool IsLocallyControlled() const;

	UFUNCTION(BlueprintPure)
	bool IsAmmoFull() const;

	UFUNCTION(BlueprintPure)
	bool HasProjectile() const;

protected:
	UFUNCTION(BlueprintPure)
	bool HasAuthority() const;

public:
	UFUNCTION(BlueprintNativeEvent)
	ABaseProjectile* GetProjectileToLaunch() const;

protected:
	UFUNCTION(BlueprintPure)
	APawn* GetOwningPawn() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio) const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetLaunchSpeed() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchPosition() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchDirectionAtViewAndThrowPowerRatio(FRotator viewRotation, float throwPowerRatio) const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchDirection() const;

public:
	UFUNCTION(BlueprintPure)
	int32 GetAmmo() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOutOfAmmo();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxAmmo(int32 newMaxAmmo, bool isMaxAmmoImmutable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ReturnAmmoUnits(int32 amountOfAmmoUnitsReturned);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Reload();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Launch();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddMaxAmmo(int32 ammoToAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBaseProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UBaseProjectileLauncher) { return 0; }
