#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocalPlayerTrackerDelegate.h"
#include "LocalPlayerTrackerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULocalPlayerTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FLocalPlayerTrackerDelegate TrackerOnLocallyObservedChanged;

public:
	UFUNCTION()
	void TriggerOnLocallyObservedChanged();

public:
	ULocalPlayerTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULocalPlayerTrackerComponent) { return 0; }
