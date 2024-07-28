#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EPawnInputPressTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_Interact.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_Interact : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditInstanceOnly)
	EPawnInputPressTypes Input;

	UPROPERTY(EditInstanceOnly)
	float OnFailFocusCooldownDuration;

	UPROPERTY(EditInstanceOnly)
	bool PropagateCooldownOnInteractable;

	UPROPERTY(EditInstanceOnly)
	float FailStartInteractTimeLimit;

public:
	UBTTask_Interact();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_Interact) { return 0; }
