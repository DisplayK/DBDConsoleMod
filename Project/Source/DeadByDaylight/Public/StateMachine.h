#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachine.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStateMachine : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _enableJoinInProgress;

private:
	UPROPERTY(ReplicatedUsing=NetIDStackChanged, Transient)
	TArray<uint16> _netStateIDStackInitial;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetStateStack(const TArray<uint16>& netStateIDStack);

	UFUNCTION()
	void NetIDStackChanged();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_SetStateStack(const TArray<uint16>& netStateIDStack);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UStateMachine) { return 0; }
