#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "FSM_State.generated.h"

class UFSM_Transition;
class UFSM_State;
class UFiniteStateMachine;

UCLASS(Abstract)
class FINITESTATEMACHINE_API UFSM_State : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FName _stateName;

	UPROPERTY(EditAnywhere)
	bool _shouldTick;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UFSM_State> _defaultChildStateClass;

	UPROPERTY(EditAnywhere, Export)
	TArray<UFSM_Transition*> _transitions;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UFiniteStateMachine* _stateMachine;

	UPROPERTY(Transient)
	UFSM_State* _parentState;

private:
	UPROPERTY(Transient)
	UFSM_State* _currentChildState;

	UPROPERTY(Transient)
	float _startTimestamp;

public:
	UFSM_State();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_State) { return 0; }
