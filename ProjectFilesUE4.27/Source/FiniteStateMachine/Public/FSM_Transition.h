#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FSM_Transition.generated.h"

class UFSM_State;
class UFSM_Condition;

UCLASS(EditInlineNew)
class UFSM_Transition : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FName _transitionName;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UFSM_State> _transitionStateClass;

	UPROPERTY(EditAnywhere, Export)
	TArray<UFSM_Condition*> _conditions;

public:
	UFSM_Transition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_Transition) { return 0; }
