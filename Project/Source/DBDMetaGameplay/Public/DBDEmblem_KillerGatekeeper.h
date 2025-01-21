#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerGatekeeper.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerGatekeeper : public UDBDEmblem
{
	GENERATED_BODY()

public:
	UDBDEmblem_KillerGatekeeper();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerGatekeeper) { return 0; }
