#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_GetPinObject.generated.h"

UCLASS()
class DBDBOTS_API UBTService_GetPinObject : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditInstanceOnly)
	FGameplayTag PinTag;

public:
	UBTService_GetPinObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_GetPinObject) { return 0; }
