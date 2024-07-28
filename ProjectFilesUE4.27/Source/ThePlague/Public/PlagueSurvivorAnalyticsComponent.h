#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlagueSurvivorAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlagueSurvivorAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	uint32 _replicatedRegularVomitHits;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlagueSurvivorAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPlagueSurvivorAnalyticsComponent) { return 0; }
