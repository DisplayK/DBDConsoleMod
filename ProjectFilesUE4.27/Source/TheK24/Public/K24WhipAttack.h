#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K24WhipAttack.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK24_API UK24WhipAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _attackSphereTraceRadius;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _attackMinDistanceToObstruction;

	UPROPERTY(EditAnywhere)
	FVector _whipMovementFromOffset;

	UPROPERTY(EditAnywhere)
	FVector _whipMovementToOffset;

private:
	UFUNCTION(Server, Reliable)
	void Server_HitBreakableOrZombie();

public:
	UFUNCTION(Server, Reliable)
	void Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp);

	UFUNCTION(Client, Reliable)
	void Client_ContaminationResult(ADBDPlayer* target, bool isValid);

public:
	UK24WhipAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttack) { return 0; }
