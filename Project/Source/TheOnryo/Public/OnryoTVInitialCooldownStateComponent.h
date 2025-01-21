#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OnryoTVInitialCooldownStateComponent.generated.h"

class UTimerObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UOnryoTVInitialCooldownStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _initialTVCooldown;

	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _cooldownTimer;

	UPROPERTY(ReplicatedUsing=OnRep_IsDone, Transient)
	bool _isDone;

private:
	UFUNCTION()
	void OnRep_IsDone();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnCooldownDone();

private:
	UFUNCTION()
	void Authority_TryStartCooldown();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOnryoTVInitialCooldownStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTVInitialCooldownStateComponent) { return 0; }
