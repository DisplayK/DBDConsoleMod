#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "OnProjectileFired.h"
#include "K26FireCrowProjectileInteractionDefinition.generated.h"

class UK26CooldownInteractionDefinition;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnProjectileFired OnProjectileFired;

private:
	UPROPERTY(Transient, Export)
	UK26CooldownInteractionDefinition* _cooldownInteraction;

	UPROPERTY(Transient, Export)
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(Transient, Export)
	UK26PathHandlerComponent* _pathHandler;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26CooldownInteractionDefinition* cooldownInteraction);

private:
	UFUNCTION(Server, Reliable)
	void Server_RequestFireOnAmmo(ASlasherPlayer* killer);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnProjectileFired(const ASlasherPlayer* killer);

public:
	UK26FireCrowProjectileInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26FireCrowProjectileInteractionDefinition) { return 0; }
