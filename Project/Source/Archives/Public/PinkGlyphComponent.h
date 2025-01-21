#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SpeedBasedNetSyncedValue.h"
#include "ECamperDamageState.h"
#include "PinkGlyphComponent.generated.h"

class UStatusEffect;
class UTileSpawnPoint;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UPinkGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkProgressChanged, float, progress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGlyphEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnMarkProgressChanged OnMarkProgressChanged_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnStartMarking_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnStopMarking_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnFullyMarked_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnStartTeleport_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnPostTeleport_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnSurvivorEnteredRange_Cosmetic;

	UPROPERTY(BlueprintAssignable)
	FOnGlyphEvent OnHasLineOfSight_Cosmetic;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gracePeriodDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _removeMarkedProgressDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _exposedStatusEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _markTimeNeeded;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumTeleportationDistance;

	UPROPERTY(EditDefaultsOnly)
	float _checkLineOfSightDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _movementRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportDelay;

	UPROPERTY(ReplicatedUsing=OnRep_MarkedProgress, Transient)
	FSpeedBasedNetSyncedValue _markedProgress;

	UPROPERTY(ReplicatedUsing=OnRep_IsPinkGlyphActive)
	bool _isPinkGlyphActive;

	UPROPERTY(ReplicatedUsing=OnRep_IsMarking)
	bool _isMarking;

	UPROPERTY(ReplicatedUsing=OnRep_HasLineOfSightToSurvivor)
	bool _hasLineOfSightToSurvivor;

	UPROPERTY(Export)
	TArray<UTileSpawnPoint*> _teleportPoints;

private:
	UFUNCTION()
	void OnRep_MarkedProgress();

	UFUNCTION()
	void OnRep_IsPinkGlyphActive() const;

	UFUNCTION()
	void OnRep_IsMarking() const;

	UFUNCTION()
	void OnRep_HasLineOfSightToSurvivor() const;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportGlyph(const FVector& location);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartGlyphPreTeleport();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_IsFullyMarkedSurvivor();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_EnterGlyphRange();

public:
	UFUNCTION(BlueprintPure)
	bool IsMarking() const;

private:
	UFUNCTION()
	void Authority_TeleportGlyph();

	UFUNCTION()
	void Authority_OnSurvivorInMovementRangeChanged(const bool inRange);

	UFUNCTION()
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPinkGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPinkGlyphComponent) { return 0; }
