#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_SurvivorLightbringer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorLightbringer : public UDBDEmblem
{
	GENERATED_BODY()

public:
	UDBDEmblem_SurvivorLightbringer();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorLightbringer) { return 0; }
