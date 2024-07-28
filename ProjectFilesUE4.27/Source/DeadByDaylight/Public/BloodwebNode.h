#pragma once

#include "CoreMinimal.h"
#include "BloodwebNodeProperties.h"
#include "BloodwebNodeGate.h"
#include "BloodwebChest.h"
#include "EBloodwebNodeState.h"
#include "BloodwebNode.generated.h"

USTRUCT()
struct FBloodwebNode
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FBloodwebNodeProperties Properties;

	UPROPERTY()
	TArray<FBloodwebNodeGate> Gates;

	UPROPERTY()
	EBloodwebNodeState State;

	UPROPERTY()
	FString NodeID;

	UPROPERTY()
	FName ContentId;

	UPROPERTY()
	FBloodwebChest BloodwebChest;

public:
	DEADBYDAYLIGHT_API FBloodwebNode();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNode) { return 0; }
