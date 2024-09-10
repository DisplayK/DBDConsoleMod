#pragma once

#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_AndCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_AndCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Export)
	TArray<UFSM_Condition*> _conditions;

public:
	UFSM_AndCondition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_AndCondition) { return 0; }
