#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EmblemAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UEmblemAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEmblemAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEmblemAnalyticsComponent) { return 0; }
