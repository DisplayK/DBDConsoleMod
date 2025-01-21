#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DBDAnimationBudgetAllocator.generated.h"

UCLASS()
class DBDANIMATIONBUDGETALLOCATOR_API UDBDAnimationBudgetAllocator : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UDBDAnimationBudgetAllocator();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAnimationBudgetAllocator) { return 0; }
