#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectsLocatorTargets.h"
#include "EffectsLocator.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class DEADBYDAYLIGHT_API AEffectsLocator : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEffectsLocatorTargets> AffectedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActorCaptureRadius;

protected:
	UPROPERTY(Transient)
	TSet<AActor*> _encountered;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnLostActor(AActor* lostActor);

	UFUNCTION()
	void OnLeaveCollisionArea(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION(BlueprintImplementableEvent)
	void OnFoundActor(AActor* foundActor);

	UFUNCTION()
	void OnEnterCollisionArea(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION(BlueprintImplementableEvent)
	void OnActorTick(UMaterialInstanceDynamic* actorMaterialInstanceDynamic);

public:
	AEffectsLocator();
};

FORCEINLINE uint32 GetTypeHash(const AEffectsLocator) { return 0; }
