#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Engine/EngineTypes.h"
#include "EStaticFieldMovementSpeed.h"
#include "DBDTunableRowHandle.h"
#include "IridescentQueenEffect.generated.h"

class UCapsuleComponent;
class ACamperPlayer;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIridescentQueenEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCapsuleComponent* _authority_iridescentQueenDischargeDetectionZone;

	UPROPERTY(EditDefaultsOnly)
	float _dischargeDetectionZoneHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float _dischargeDetectionZoneRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _madnessToAddOnDischarge;

	UPROPERTY(ReplicatedUsing=OnRep_ChargeActive)
	bool _chargeActive;

	UPROPERTY(Replicated)
	bool _charged;

private:
	UFUNCTION()
	void OnRep_ChargeActive();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DischargeOnSurvivor(ACamperPlayer* survivor);

protected:
	UFUNCTION(BlueprintPure)
	EStaticFieldMovementSpeed GetStaticFieldMovementSpeed() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateStaticFieldFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SpawnStaticFieldFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeZoneDeactivated();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeZoneActivated();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeOnSurvivor(ADBDPlayer* survivorToShock);

private:
	UFUNCTION()
	void Authority_OnSurvivorOverlappedDischargeZone(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIridescentQueenEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentQueenEffect) { return 0; }
