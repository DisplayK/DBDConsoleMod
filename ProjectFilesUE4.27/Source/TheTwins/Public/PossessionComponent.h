#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessionComponent.generated.h"

class AAIController;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPossessionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _startPossessed;

	UPROPERTY(Transient)
	AAIController* _emptyController;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StartPossessionOf(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_NotifyPossessionDone();

	UFUNCTION(Server, Reliable)
	void Server_NotifyBeingPossessedInteractionStarted();

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartPossessionOf(ADBDPlayer* playerToPossess);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_NotifyPossessionDone();

public:
	UFUNCTION(BlueprintPure)
	bool IsPossessed() const;

	UFUNCTION(BlueprintPure)
	bool IsDormant() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void CosmeticLocal_OnUncontrolled(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void CosmeticLocal_OnControlled(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlledChanged(ADBDPlayer* player, bool isControlled);

private:
	UFUNCTION(Client, Reliable)
	void Client_WaitForBeingPossessedInteractionToStart();

	UFUNCTION(Client, Reliable)
	void Client_StartStateMachineDriverChangeProcess();

public:
	UPossessionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPossessionComponent) { return 0; }
