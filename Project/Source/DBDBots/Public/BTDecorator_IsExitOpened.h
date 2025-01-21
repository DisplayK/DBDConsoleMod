#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsExitOpened.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsExitOpened : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBExitObj;

public:
	UBTDecorator_IsExitOpened();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsExitOpened) { return 0; }
