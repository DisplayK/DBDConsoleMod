#pragma once

#include "CoreMinimal.h"
#include "NearUndestroyedPallet.h"
#include "NearFallenPallet.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UNearFallenPallet : public UNearUndestroyedPallet
{
	GENERATED_BODY()

public:
	UNearFallenPallet();
};

FORCEINLINE uint32 GetTypeHash(const UNearFallenPallet) { return 0; }
