#pragma once

#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_NotCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_NotCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	UFSM_Condition* _condition;

public:
	UFSM_NotCondition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_NotCondition) { return 0; }
