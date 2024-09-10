#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "HatchetProjectile.generated.h"

UCLASS()
class AHatchetProjectile : public AKillerProjectile
{
	GENERATED_BODY()

public:
	AHatchetProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AHatchetProjectile) { return 0; }
