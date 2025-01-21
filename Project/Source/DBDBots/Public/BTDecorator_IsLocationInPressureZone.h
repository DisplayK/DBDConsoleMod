#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsLocationInPressureZone.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsLocationInPressureZone : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBAtLocation;

public:
	UBTDecorator_IsLocationInPressureZone();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsLocationInPressureZone) { return 0; }
