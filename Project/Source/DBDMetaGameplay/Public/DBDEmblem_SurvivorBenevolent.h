#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_SurvivorBenevolent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorBenevolent : public UDBDEmblem
{
	GENERATED_BODY()

public:
	UDBDEmblem_SurvivorBenevolent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorBenevolent) { return 0; }
