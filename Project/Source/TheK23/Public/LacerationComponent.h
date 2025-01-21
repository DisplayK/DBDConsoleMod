#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "LacerationUIData.h"
#include "UObject/NoExportTypes.h"
#include "LacerationComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK23_API ULacerationComponent : public UActorComponent, public ILacerationUIData
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRepLaceration)
	float _laceration;

	UPROPERTY(Transient, Export)
	UStatusEffect* _onHitSpeedBoost;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxLaceration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lacerationExplosionDamage;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lacerationRegressionPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lacerationRegressionPerSecondWhileRunning;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _speedBoostIntensity;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _speedBoostDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stopTickingRegressionWhileInjured;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stopTickingRegressionWhileInChase;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stopTickingRegressionWithinTerrorRadius;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _timeBeforeLacerationDecayStarts;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _regressionBufferTimerAlwaysTicks;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lacerationToRemoveOnBasicAttack;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _thresholdForGraceTimerScoreEvent;

private:
	UFUNCTION()
	void OnRepLaceration(float oldLaceration);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKo, const FVector& impactLocation, const FVector& impactNormal);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, float lacerationPercent, bool isDangerous);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool causedKo, const FVector& impactNormal);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULacerationComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULacerationComponent) { return 0; }
