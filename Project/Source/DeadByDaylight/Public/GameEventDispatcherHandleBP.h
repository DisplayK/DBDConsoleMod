#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventDelegate.h"
#include "GameEventDispatcherHandleBP.generated.h"

USTRUCT(BlueprintType)
struct FGameEventDispatcherHandleBP
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Filter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameEventDelegate GameEventDelegate;

public:
	DEADBYDAYLIGHT_API FGameEventDispatcherHandleBP();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventDispatcherHandleBP) { return 0; }
