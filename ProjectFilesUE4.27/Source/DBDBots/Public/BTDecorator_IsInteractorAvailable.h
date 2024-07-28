#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsInteractorAvailable.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsInteractorAvailable : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractorObj;

public:
	UBTDecorator_IsInteractorAvailable();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsInteractorAvailable) { return 0; }
