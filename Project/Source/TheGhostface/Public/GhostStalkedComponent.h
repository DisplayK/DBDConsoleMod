#pragma once

#include "CoreMinimal.h"
#include "TagStateBool.h"
#include "GhostStalkedUIData.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "GhostStalkedComponent.generated.h"

class UTimerObject;
class ASlasherPlayer;
class ADBDPlayer;
class UStatusEffect;
class UStalkedComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStalkedComponent : public UActorComponent, public IGhostStalkedUIData
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsSpottingKiller, bool, isSpotting);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsMarkedChanged, bool, isMarked);

public:
	UPROPERTY(BlueprintAssignable)
	FOnIsMarkedChanged OnIsMarkedChanged;

	UPROPERTY(BlueprintAssignable)
	FOnIsSpottingKiller OnIsSpottingKillerChanged;

private:
	UPROPERTY(Replicated, Transient)
	FTagStateBool _isMarked;

	UPROPERTY(Replicated, Transient, Export)
	UStatusEffect* _ghostKillerInstinctEffect;

	UPROPERTY(Transient, Export)
	UTimerObject* _markTimer;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _killerInstinctDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _markDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stalkPointsDepleteDelay;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killer;

	UPROPERTY(Transient, Export)
	UStalkedComponent* _stalkedComponent;

private:
	UFUNCTION()
	void OnKillerSpottedChanged(ADBDPlayer* spotter, bool spotted);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Local_OnSpotKiller();

public:
	UFUNCTION(BlueprintPure)
	bool IsMarked() const;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void Initialize(ASlasherPlayer* killer);

private:
	UFUNCTION(Exec)
	void DBD_DebugGhost(bool debug);

public:
	UFUNCTION(Client, Unreliable)
	void Client_OnSpotKiller();

private:
	UFUNCTION()
	void Authority_OnStalkedChargeFull(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGhostStalkedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStalkedComponent) { return 0; }
