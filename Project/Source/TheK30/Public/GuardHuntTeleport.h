#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "GuardHuntTeleport.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardHuntTeleport : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _huntStartUpDuration;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _huntStartUpDurationPathLengthMultiplier;

public:
	UGuardHuntTeleport();
};

FORCEINLINE uint32 GetTypeHash(const UGuardHuntTeleport) { return 0; }
