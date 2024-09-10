#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "DestroyTwin.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDestroyTwin : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _destroyTwinMaxCharge;

public:
	UDestroyTwin();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyTwin) { return 0; }
