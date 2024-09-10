#pragma once

#include "CoreMinimal.h"
#include "ECharacterMovementTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetMovementMode.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetMovementMode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes MovementMode;

public:
	UBTTask_SetMovementMode();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetMovementMode) { return 0; }
