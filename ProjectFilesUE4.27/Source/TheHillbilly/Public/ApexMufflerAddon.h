#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "ApexMufflerAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UApexMufflerAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

public:
	UApexMufflerAddon();
};

FORCEINLINE uint32 GetTypeHash(const UApexMufflerAddon) { return 0; }
