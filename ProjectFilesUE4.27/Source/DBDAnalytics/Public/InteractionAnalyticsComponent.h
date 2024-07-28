#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UInteractionAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractionAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionAnalyticsComponent) { return 0; }
