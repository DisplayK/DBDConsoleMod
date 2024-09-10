#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"
#include "ECharacterMovementTypes.h"
#include "BTTask_ExtMoveDirecltyToward.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_ExtMoveDirecltyToward : public UBTTask_MoveDirectlyToward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes MovementMode;

public:
	UBTTask_ExtMoveDirecltyToward();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_ExtMoveDirecltyToward) { return 0; }
