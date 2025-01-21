#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "CalmBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCalmBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _terrorRadiusModification;

public:
	UCalmBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UCalmBaseAddon) { return 0; }
