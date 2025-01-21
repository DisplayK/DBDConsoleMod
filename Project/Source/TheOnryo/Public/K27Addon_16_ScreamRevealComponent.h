#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K27Addon_16_ScreamRevealComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK27Addon_16_ScreamRevealComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _authorityHasRequestedSurvivorScreamConfirmation;

	UPROPERTY(Transient)
	float _screamDuration;

private:
	UFUNCTION(Server, Reliable)
	void Server_ConfirmKillerIsInViewValidation(bool isKillerInView);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(const float screamRevealDuration);

	UFUNCTION(Client, Reliable)
	void Client_QueryIsKillerInSurvivorView();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ADBDPlayer* survivorPlayer, const float screamRevealDuration);

public:
	UK27Addon_16_ScreamRevealComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK27Addon_16_ScreamRevealComponent) { return 0; }
