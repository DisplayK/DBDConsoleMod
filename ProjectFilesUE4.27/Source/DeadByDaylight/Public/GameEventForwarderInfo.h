#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventForwarderInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameEventForwarderInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> GameEventsToRegister;

	UPROPERTY(EditAnywhere)
	FGameplayTag ForwardedEvent;

public:
	DEADBYDAYLIGHT_API FGameEventForwarderInfo();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventForwarderInfo) { return 0; }
