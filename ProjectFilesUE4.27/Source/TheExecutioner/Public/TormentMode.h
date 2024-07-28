#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "TormentMode.generated.h"

class UAuthoritativeActorPoolComponent;
class UPowerToggleComponent;
class UChargeableComponent;
class UAgonyComponent;
class UTormentTrailSpawnerComponent;
class UTormentTrailDetectorComponent;
class UPowerChargeComponent;
class UPowerChargePresentationItemProgressComponent;
class UTormentTrailPointCollectionComponent;
class UTormentModeCooldownInteraction;
class UCurveFloat;
class AMobileTormentTrailRenderer;

UCLASS()
class THEEXECUTIONER_API ATormentMode : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _activateTormentModeCharge;

	UPROPERTY(Export)
	UPowerChargeComponent* _tormentModeCharge;

	UPROPERTY(Export)
	UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;

	UPROPERTY(Export)
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UTormentTrailSpawnerComponent* _tormentTrailSpawnerComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _tormentAttackTrailControllerPool;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailControllerPool;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _tormentTrailPointPool;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _restrictedTormentTrailPointPool;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _activateTormentModeSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tormentModeChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tormentModeDischargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModePauseChargeRate;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tormentModeAttackConsumePower;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tormentModeMinimumPercentToActivate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeMouseYawScale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeYawAdjustTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeGamePadYawScale;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tormentModeYawInputLimit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeNotMovingYawScaleMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeNotMovingYawAdjustTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentModeWalkSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _normalWalkSpeed;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _tormentModeForcedPitch;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAgonyComponent> _agonyComponentClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UTormentTrailDetectorComponent> _killerTormentTrailDetectorClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UTormentTrailDetectorComponent> _survivorTormentTrailDetectorClass;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTormentModeCooldownInteraction* _tormentModeCooldownInteraction;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _tormentModeChargeSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMobileTormentTrailRenderer> _mobileTormentTrailRendererClass;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestMoreActorInAttackPool();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTormentModeStop_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTormentModeStart_Cosmetic();

private:
	UFUNCTION()
	void OnTormentModeChargeEmpty();

public:
	UFUNCTION(BlueprintPure)
	bool IsInTormentMode() const;

public:
	ATormentMode();
};

FORCEINLINE uint32 GetTypeHash(const ATormentMode) { return 0; }
