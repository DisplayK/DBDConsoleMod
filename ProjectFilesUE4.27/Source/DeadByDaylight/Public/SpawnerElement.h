#pragma once

#include "CoreMinimal.h"
#include "ActorSpawnerProperties.h"
#include "SpawnerElement.generated.h"

USTRUCT(BlueprintType)
struct FSpawnerElement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorSpawnerProperties> ObjectsToBeSpawned;

public:
	DEADBYDAYLIGHT_API FSpawnerElement();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnerElement) { return 0; }
