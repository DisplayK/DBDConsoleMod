#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "ETelevisionCosmeticState.h"
#include "OnryoTelevision.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class USceneComponent;
class UMapActorComponent;
class UTelevisionOutlineUpdateStrategy;
class ULocalPlayerTrackerComponent;
class UOnryoTVAutoPowerComponent;

UCLASS()
class THEONRYO_API AOnryoTelevision : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _teleportPosition;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isKillerInOtherWorld;

private:
	UPROPERTY(VisibleAnywhere, Export)
	UTelevisionOutlineUpdateStrategy* _televisionOutlineUpdateStrategy;

	UPROPERTY(Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UOnryoTVAutoPowerComponent* _autoPowerComponent;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorsThatCanInsertTape)
	TArray<ADBDPlayer*> _survivorsThatCanInsertTape;

	UPROPERTY(ReplicatedUsing=OnRep_IsPowered)
	bool _isPowered;

	UPROPERTY()
	TSet<ADBDPlayer*> _nearbySurvivorsWithoutTape;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _distanceNearTVWithoutTape;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _survivorTurnOffTVDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _teleportTurnOffDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _survivorInsertTapeTurnOffDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shouldRepowerOtherTelevisionsWhenAllTurnedOff;

private:
	UFUNCTION()
	void OnRep_SurvivorsThatCanInsertTape();

	UFUNCTION()
	void OnRep_IsPowered(bool previousIsPowered);

	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable)
	void OnCosmeticTransitionStateFinished();

	UFUNCTION(BlueprintPure)
	bool IsAnySurvivorWithoutTapeNearby() const;

	UFUNCTION(BlueprintPure)
	ETelevisionCosmeticState GetTelevisionCosmeticState() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetIsTeleportTarget(bool target);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTVSelectedByLocalSurvivor(ADBDPlayer* survivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTelevisionCosmeticStateChanged(ETelevisionCosmeticState nextState, ETelevisionCosmeticState previousState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStarted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCompleted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCancelled();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool active);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperCanInsertTapeChanged(const bool canInsertTape);

private:
	UFUNCTION()
	void Authority_OnRepowerTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AOnryoTelevision();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoTelevision) { return 0; }
