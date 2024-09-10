#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_TickableBase.generated.h"

UCLASS(Abstract)
class DBDBOTS_API UBTDecorator_TickableBase : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTDecorator_TickableBase();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_TickableBase) { return 0; }
