#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerSoundCuesComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerSoundCuesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void StopTrackingActor(AActor* actorToStopTracking);

	UFUNCTION(BlueprintCallable)
	void StartTrackingActorWithLifetime(AActor* actorToStartTracking, FName distanceDataID, float trackerLifetime);

	UFUNCTION(BlueprintCallable)
	void StartTrackingActor(AActor* actorToStartTracking, FName distanceDataID);

public:
	UKillerSoundCuesComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSoundCuesComponent) { return 0; }
