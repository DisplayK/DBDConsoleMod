#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "GhostfaceCrouchAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostfaceCrouchAttack : public UPounceAttack
{
	GENERATED_BODY()

public:
	UGhostfaceCrouchAttack();
};

FORCEINLINE uint32 GetTypeHash(const UGhostfaceCrouchAttack) { return 0; }
