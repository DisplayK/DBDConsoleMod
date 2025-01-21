#pragma once

#include "CoreMinimal.h"
#include "EBloodOrbState.h"
#include "Components/ActorComponent.h"
#include "BloodOrbStateMonitorDelegate.h"
#include "BloodOrbStateMonitorComponent.generated.h"

class ABloodOrb;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbStateMonitorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FBloodOrbStateMonitorDelegate OnBloodOrbAbsorbedCosmetic;

private:
	UFUNCTION()
	void OnBloodOrbStateChanged(const EBloodOrbState oldState, const EBloodOrbState newState, const ABloodOrb* bloodOrb) const;

	UFUNCTION()
	void OnBloodOrbSpawned(const ABloodOrb* bloodOrb);

	UFUNCTION()
	void OnBloodOrbDestroyed(const ABloodOrb* bloodOrb);

public:
	UBloodOrbStateMonitorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbStateMonitorComponent) { return 0; }
