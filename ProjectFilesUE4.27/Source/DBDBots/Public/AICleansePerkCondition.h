#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataTableDropdown.h"
#include "AICleansePerkCondition.generated.h"

USTRUCT()
struct FAICleansePerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown CleansePerkID;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> DisplayPercentQuery;

	UPROPERTY(EditInstanceOnly)
	float DisplayPercentValue;

public:
	DBDBOTS_API FAICleansePerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAICleansePerkCondition) { return 0; }
