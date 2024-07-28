#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "GameplayTagContainer.h"
#include "BTService_RunSkills.generated.h"

UCLASS()
class DBDBOTS_API UBTService_RunSkills : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag Context;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBFilterKey;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;

public:
	UBTService_RunSkills();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_RunSkills) { return 0; }
