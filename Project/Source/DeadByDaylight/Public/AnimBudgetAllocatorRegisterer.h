#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimBudgetAllocatorRegisterer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAnimBudgetAllocatorRegisterer : public UActorComponent
{
	GENERATED_BODY()

public:
	UAnimBudgetAllocatorRegisterer();
};

FORCEINLINE uint32 GetTypeHash(const UAnimBudgetAllocatorRegisterer) { return 0; }
