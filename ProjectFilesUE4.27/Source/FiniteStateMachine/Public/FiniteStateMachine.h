#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFiniteStateMachineStatus.h"
#include "Templates/SubclassOf.h"
#include "FiniteStateMachine.generated.h"

class UFSM_State;
class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class FINITESTATEMACHINE_API UFiniteStateMachine : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFSM_State> _defaultStateClass;

private:
	UPROPERTY(Transient)
	UFSM_State* _currentState;

	UPROPERTY(Transient)
	EFiniteStateMachineStatus _currentStateMachineStatus;

	UPROPERTY(Transient)
	UObject* _stateMachineOwner;

	UPROPERTY(Transient)
	TArray<UFSM_State*> _stateInstances;

public:
	UFiniteStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UFiniteStateMachine) { return 0; }
