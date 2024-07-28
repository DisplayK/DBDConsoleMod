#pragma once

#include "CoreMinimal.h"
#include "ActorSpawner.h"
#include "LightFunctionActorSpawner.generated.h"

class UTexture;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULightFunctionActorSpawner : public UActorSpawner
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture* LightFunctionTexture;

public:
	ULightFunctionActorSpawner();
};

FORCEINLINE uint32 GetTypeHash(const ULightFunctionActorSpawner) { return 0; }
