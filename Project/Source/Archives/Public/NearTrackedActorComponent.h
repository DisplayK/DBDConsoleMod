#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NearTrackedActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UNearTrackedActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsWithinRangeChanged, bool, isWithinRange, const AActor*, trackedActor);

public:
	UPROPERTY(BlueprintAssignable)
	FOnIsWithinRangeChanged IsWithinRangeDelegate;

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceThreshold;

public:
	UFUNCTION(BlueprintCallable)
	void StopTrackingActor(const AActor* actor);

	UFUNCTION(BlueprintCallable)
	void StartTrackingActor(const AActor* actor);

	UFUNCTION(BlueprintCallable)
	void SetDistanceThreshold(float value);

	UFUNCTION(BlueprintPure)
	bool IsActorWithinRange(const AActor* actor) const;

public:
	UNearTrackedActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNearTrackedActorComponent) { return 0; }
