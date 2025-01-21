#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDANALYTICS_API USurvivorAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USurvivorAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAnalyticsComponent) { return 0; }
