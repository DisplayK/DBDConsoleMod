#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "BlackBox.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlackBox : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blockDuration;

public:
	UBlackBox();
};

FORCEINLINE uint32 GetTypeHash(const UBlackBox) { return 0; }
