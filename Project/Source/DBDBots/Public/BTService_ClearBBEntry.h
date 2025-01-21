#pragma once

#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_ClearBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTService_ClearBBEntry : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToResetKey;

public:
	UBTService_ClearBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_ClearBBEntry) { return 0; }
