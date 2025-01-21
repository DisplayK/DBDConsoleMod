#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "Addon_Ghost_DriversLicense.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UAddon_Ghost_DriversLicense : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _progressLoss;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blockedTime;

public:
	UAddon_Ghost_DriversLicense();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Ghost_DriversLicense) { return 0; }
