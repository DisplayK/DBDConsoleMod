#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TricksterSuperModeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTricksterSuperModeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRepIsInSuperMode)
	bool _isInSuperMode;

	UPROPERTY(ReplicatedUsing=OnRepIsSuperModeReady)
	bool _isSuperModeReady;

	UPROPERTY(ReplicatedUsing=OnRepIsInCooldown)
	bool _isInCooldown;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargesToAddOnKnifeHit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _superModeMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _superModeReadyDepletionPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _superModeActiveDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _superModeCooldown;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shouldDisableFlurryDuringCooldown;

private:
	UFUNCTION()
	void OnRepIsSuperModeReady();

	UFUNCTION()
	void OnRepIsInSuperMode();

	UFUNCTION()
	void OnRepIsInCooldown();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTricksterSuperModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterSuperModeComponent) { return 0; }
