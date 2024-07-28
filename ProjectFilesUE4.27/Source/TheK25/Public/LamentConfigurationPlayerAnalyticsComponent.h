#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LamentConfigurationPlayerPossessionData.h"
#include "LamentConfigurationPlayerAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_AnalyticsCount)
	int32 _analyticsCount;

	UPROPERTY(Replicated)
	FLamentConfigurationPlayerPossessionData _possessionAnalytics;

private:
	UFUNCTION()
	void OnRep_AnalyticsCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationPlayerAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationPlayerAnalyticsComponent) { return 0; }
