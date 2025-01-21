#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETaskInputPressModes.h"
#include "EPawnInputPressTypes.h"
#include "AITunableParameter.h"
#include "BTTask_InputPress.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_InputPress : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EPawnInputPressTypes Input;

	UPROPERTY(EditInstanceOnly)
	ETaskInputPressModes InputMode;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter InputPressLoopInterval;

public:
	UBTTask_InputPress();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_InputPress) { return 0; }
