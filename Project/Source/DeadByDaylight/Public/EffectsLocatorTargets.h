#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EffectsLocatorTargets.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEffectsLocatorTargets
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> TargetActorClass;

public:
	DEADBYDAYLIGHT_API FEffectsLocatorTargets();
};

FORCEINLINE uint32 GetTypeHash(const FEffectsLocatorTargets) { return 0; }
