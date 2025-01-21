#pragma once

#include "CoreMinimal.h"
#include "PlayerLightBurnable.h"
#include "DBDTunableRowHandle.h"
#include "WraithBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEWRAITH_API UWraithBurnable : public UPlayerLightBurnable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _flashlightEvasionScoreCooldown;

public:
	UWraithBurnable();
};

FORCEINLINE uint32 GetTypeHash(const UWraithBurnable) { return 0; }
