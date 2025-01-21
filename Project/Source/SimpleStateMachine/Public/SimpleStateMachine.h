#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SimpleStateMachine.generated.h"

class USimpleStateMachineBaseState;
class USimpleStateMachineBaseTransition;

UCLASS(meta=(BlueprintSpawnableComponent))
class SIMPLESTATEMACHINE_API USimpleStateMachine : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USimpleStateMachineBaseState> _defaultStateClass;

	UPROPERTY(EditDefaultsOnly)
	TSet<TSubclassOf<USimpleStateMachineBaseState>> _stateClasses;

	UPROPERTY(EditDefaultsOnly)
	TSet<TSubclassOf<USimpleStateMachineBaseTransition>> _transitionsClasses;

	UPROPERTY(Transient)
	USimpleStateMachineBaseState* _defaultState;

	UPROPERTY(Transient)
	USimpleStateMachineBaseState* _currentState;

	UPROPERTY(Transient)
	TMap<FName, USimpleStateMachineBaseState*> _states;

	UPROPERTY(EditDefaultsOnly)
	bool _debugPrintState;

public:
	USimpleStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const USimpleStateMachine) { return 0; }
