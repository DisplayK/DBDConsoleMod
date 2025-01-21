#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OnryoTeleportTargeterComponent.generated.h"

class AOnryoTelevision;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOnryoTeleportTargeterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumTeleportAngle;

	UPROPERTY(ReplicatedUsing=OnRep_TargetTelevision, Transient)
	AOnryoTelevision* _replicatedTargetTelevision;

	UPROPERTY(Transient)
	AOnryoTelevision* _localTargetTelevision;

	UPROPERTY(Transient)
	AOnryoTelevision* _previousTarget;

	UPROPERTY(EditDefaultsOnly)
	float _targetUpdateInterval;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetTeleportTarget(AOnryoTelevision* tv);

	UFUNCTION()
	void OnRep_TargetTelevision();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOnryoTeleportTargeterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTeleportTargeterComponent) { return 0; }
