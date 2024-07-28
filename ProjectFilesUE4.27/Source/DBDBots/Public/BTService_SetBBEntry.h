#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetBBEntry : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditInstanceOnly)
	FString ToSetValue;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter RandomSetChance;

public:
	UBTService_SetBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetBBEntry) { return 0; }
