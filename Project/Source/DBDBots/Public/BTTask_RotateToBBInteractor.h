#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RotateToBBInteractor.generated.h"

UCLASS()
class UBTTask_RotateToBBInteractor : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractorObj;

	UPROPERTY(EditInstanceOnly)
	TArray<FString> InteractionIds;

public:
	UBTTask_RotateToBBInteractor();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_RotateToBBInteractor) { return 0; }
