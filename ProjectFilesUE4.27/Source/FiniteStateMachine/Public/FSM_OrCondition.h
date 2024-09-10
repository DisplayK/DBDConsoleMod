#pragma once

#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_OrCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_OrCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Export)
	TArray<UFSM_Condition*> _conditions;

public:
	UFSM_OrCondition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_OrCondition) { return 0; }
