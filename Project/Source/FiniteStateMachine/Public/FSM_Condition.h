#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FSM_Condition.generated.h"

UCLASS(Abstract, EditInlineNew)
class FINITESTATEMACHINE_API UFSM_Condition : public UDataAsset
{
	GENERATED_BODY()

public:
	UFSM_Condition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_Condition) { return 0; }
