#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EAttackType.h"
#include "EContaminator.h"
#include "K24Power.generated.h"

class UChargeableComponent;
class USurvivorContaminationComponent;
class UCurveFloat;
class AZombieCharacter;
class UInteractionDefinition;
class APallet;
class ABreakableBase;

UCLASS()
class AK24Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerWalkSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerWalkSpeedLevel3;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _normalWalkSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerMouseYawScale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerYawAdjustTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerGamePadYawScale;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _activateK24PowerCharge;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _activateK24PowerSecondsToCharge;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _activatePowerChargeSpeedCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _activatePowerChargeLvl3SpeedCurve;

	UPROPERTY(Transient)
	UCurveFloat* _playedPowerChargeSpeedCurve;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _k24PowerCooldownInteraction;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _whipLengthLevel1;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _whipLengthLevel2;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _whipLengthLevel3;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USurvivorContaminationComponent> _contaminationComponentBP;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _powerChargeSurvivorContaminatedPoint;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _powerChargeZombieKilledPoint;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _powerChargeSurvivorHitPoint;

	UPROPERTY(ReplicatedUsing=OnRep_PowerLevelPoints)
	float _powerLevelPoints;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerLevelPointsToLevel2;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerLevelPointsToLevel3;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackStart_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackMove_Cosmetic(FVector whipStartLocation, FVector whipEndLocation, bool isFirstRayCast);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackHit_Cosmetic(FVector whipStartLocation, FVector impactPointLocation, FVector whipEndLocation, bool isFirstHit, FVector impactNormal, const FName phyMaterial, bool hitACharacter);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void WhipAttackEnd_Cosmetic();

	UFUNCTION(Server, Reliable)
	void Server_PowerDestroyPallet(APallet* pallet);

	UFUNCTION(Server, Reliable)
	void Server_PowerDestroyBreakable(ABreakableBase* breakable);

	UFUNCTION(Server, Reliable)
	void Server_KillAZombie(AZombieCharacter* zombie, EAttackType attackType);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerHitStateEnd_Cosmetic(FVector whipStartLocation, FVector whipEndLocation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerCooldownEnd_Cosmetic();

private:
	UFUNCTION()
	void OnRep_PowerLevelPoints();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerStop_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerStartCharge_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPowerLevelChanged_Cosmetic(const int32 powerLevel);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PowerDestroyPallet(APallet* pallet);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PowerDestroyBreakable(ABreakableBase* breakable);

public:
	UFUNCTION(BlueprintPure)
	bool IsInPower() const;

	UFUNCTION(BlueprintPure)
	float GetWhipLength() const;

	UFUNCTION(BlueprintPure)
	int32 GetPowerLevel() const;

	UFUNCTION()
	void Authority_OnSurvivorContaminated(const EContaminator contaminator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK24Power();
};

FORCEINLINE uint32 GetTypeHash(const AK24Power) { return 0; }
