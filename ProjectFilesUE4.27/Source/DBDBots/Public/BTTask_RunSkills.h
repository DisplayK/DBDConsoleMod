#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RunSkills.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_RunSkills : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag Context;

public:
	UBTTask_RunSkills();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_RunSkills) { return 0; }
