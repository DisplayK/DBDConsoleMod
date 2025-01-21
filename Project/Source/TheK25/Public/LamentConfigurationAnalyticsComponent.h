#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LamentConfigurationAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULamentConfigurationAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationAnalyticsComponent) { return 0; }
