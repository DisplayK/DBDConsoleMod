#pragma once

#include "CoreMinimal.h"
#include "ObjectRandomizer.h"
#include "SpawnerElement.h"
#include "ActorSpawnerRandomizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawnerRandomizer : public UObjectRandomizer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSpawnerElement> ActivatedSpawnerContentLists;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSpawnerElement> DeactivatedSpawnerContentLists;

public:
	UActorSpawnerRandomizer();
};

FORCEINLINE uint32 GetTypeHash(const UActorSpawnerRandomizer) { return 0; }
