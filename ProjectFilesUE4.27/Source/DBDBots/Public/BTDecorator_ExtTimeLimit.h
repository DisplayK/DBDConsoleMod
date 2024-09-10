#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "AITunableParameter.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ExtTimeLimit.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtTimeLimit : public UBTDecorator_TimeLimit, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MaxTimeLimit;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBFilterKey;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;

public:
	UBTDecorator_ExtTimeLimit();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtTimeLimit) { return 0; }
