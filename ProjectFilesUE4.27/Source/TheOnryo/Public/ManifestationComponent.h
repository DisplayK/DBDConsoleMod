#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "StatProperty.h"
#include "Templates/SubclassOf.h"
#include "ManifestationComponent.generated.h"

class UOnryoVisibilityComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UManifestationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lingeringFlickerDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTrackedTimeSinceManifest;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _manifestInteractionUndetectableLingerTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _teleportManifestUndetectableLingeringDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lingeringUndetectableDurationFromOtherSources;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _scorePercent;

	UPROPERTY(Replicated, Transient, Export)
	UOnryoVisibilityComponent* _onryoVisibilityComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UOnryoVisibilityComponent> _onryoVisibilityComponentClass;

	UPROPERTY(ReplicatedUsing=OnRep_IsManifested, Transient)
	bool _isManifested;

	UPROPERTY(ReplicatedUsing=OnRep_LingeringUndetectableEndTimeStamp, Transient)
	float _lingeringUndetectableEndTimeStamp;

private:
	UFUNCTION()
	void OnRep_LingeringUndetectableEndTimeStamp();

	UFUNCTION()
	void OnRep_IsManifested();

	UFUNCTION()
	void OnLingeringUndetectableTimerCompleted();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnManifestationTransitionComplete();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnManifestationChanged(const bool isManifested, const bool isImmediateManifest);

	UFUNCTION()
	void Authority_OnMoriStarted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UManifestationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UManifestationComponent) { return 0; }
