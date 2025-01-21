#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerHookAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerHookAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPlayerHookAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerHookAnalyticsComponent) { return 0; }
