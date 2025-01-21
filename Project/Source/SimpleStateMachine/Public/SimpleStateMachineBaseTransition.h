#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleStateMachineBaseTransition.generated.h"

class USimpleStateMachine;

UCLASS(Abstract)
class SIMPLESTATEMACHINE_API USimpleStateMachineBaseTransition : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USimpleStateMachine* _stateMachine;

public:
	USimpleStateMachineBaseTransition();
};

FORCEINLINE uint32 GetTypeHash(const USimpleStateMachineBaseTransition) { return 0; }
