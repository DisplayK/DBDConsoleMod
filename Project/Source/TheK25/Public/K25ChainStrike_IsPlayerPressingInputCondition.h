#pragma once

#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "EInputInteractionType.h"
#include "K25ChainStrike_IsPlayerPressingInputCondition.generated.h"

UCLASS(EditInlineNew)
class UK25ChainStrike_IsPlayerPressingInputCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	EInputInteractionType _inputType;

public:
	UK25ChainStrike_IsPlayerPressingInputCondition();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrike_IsPlayerPressingInputCondition) { return 0; }
