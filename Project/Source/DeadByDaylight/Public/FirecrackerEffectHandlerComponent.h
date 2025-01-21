#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFirecrackerInRangeEndEvent.h"
#include "OnFirecrackerInRangeBeginEvent.h"
#include "FirecrackerEffectHandlerComponent.generated.h"

class AFirecracker;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirecrackerEffectHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnFirecrackerInRangeBeginEvent OnFirecrackerInRangeBegin;

	UPROPERTY(BlueprintAssignable)
	FOnFirecrackerInRangeEndEvent OnFirecrackerInRangeEnd;

private:
	UPROPERTY(Transient)
	TSet<AFirecracker*> _inRangeFirecrackers;

private:
	UFUNCTION()
	void OnFirecrackerDestroyed(AActor* destroyedActor);

public:
	UFirecrackerEffectHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFirecrackerEffectHandlerComponent) { return 0; }
