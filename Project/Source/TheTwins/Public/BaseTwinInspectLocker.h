#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "DBDTunableRowHandle.h"
#include "BaseTwinInspectLocker.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBaseTwinInspectLocker : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _inspectInteractionTime;

public:
	UBaseTwinInspectLocker();
};

FORCEINLINE uint32 GetTypeHash(const UBaseTwinInspectLocker) { return 0; }
