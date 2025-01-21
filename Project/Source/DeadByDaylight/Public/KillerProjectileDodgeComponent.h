#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerProjectileDodgeComponent.generated.h"

class ACamperPlayer;
class AKillerProjectile;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerProjectileDodgeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AKillerProjectile* _killerProjectile;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _proximitySurvivors;

private:
	UFUNCTION()
	void OnKillerProjectileLaunched();

	UFUNCTION()
	void OnKillerProjectileFinishedWithoutCollision();

	UFUNCTION()
	void OnKillerProjectileFinished(AActor* survivorHit);

public:
	UKillerProjectileDodgeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerProjectileDodgeComponent) { return 0; }
