#pragma once

#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_RefCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_RefCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UFSM_Condition* _refcondition;

public:
	UFSM_RefCondition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_RefCondition) { return 0; }
