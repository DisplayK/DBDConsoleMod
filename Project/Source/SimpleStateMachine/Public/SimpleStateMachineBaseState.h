#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleStateMachineBaseState.generated.h"

class USimpleStateMachine;

UCLASS(Abstract)
class SIMPLESTATEMACHINE_API USimpleStateMachineBaseState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USimpleStateMachine* _stateMachine;

public:
	USimpleStateMachineBaseState();
};

FORCEINLINE uint32 GetTypeHash(const USimpleStateMachineBaseState) { return 0; }
