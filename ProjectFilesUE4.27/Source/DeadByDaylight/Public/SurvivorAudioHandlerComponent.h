#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerAudioHandlerComponent.h"
#include "SurvivorAudioHandlerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorAudioHandlerComponent : public UDBDPlayerAudioHandlerComponent
{
	GENERATED_BODY()

public:
	USurvivorAudioHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAudioHandlerComponent) { return 0; }
