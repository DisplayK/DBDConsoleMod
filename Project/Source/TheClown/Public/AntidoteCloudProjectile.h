#pragma once

#include "CoreMinimal.h"
#include "BaseGasCloudProjectile.h"
#include "AntidoteCloudProjectile.generated.h"

UCLASS()
class AAntidoteCloudProjectile : public ABaseGasCloudProjectile
{
	GENERATED_BODY()

public:
	AAntidoteCloudProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AAntidoteCloudProjectile) { return 0; }
