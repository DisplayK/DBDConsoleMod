#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_MoveToAbortIfStuck.generated.h"

UCLASS()
class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _deltaConsideredStuck;

	UPROPERTY(EditAnywhere)
	float _maxTimeStuck;

public:
	UBTTask_MoveToAbortIfStuck();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_MoveToAbortIfStuck) { return 0; }
