#pragma once

#include "CoreMinimal.h"
#include "BloodwebNode.h"
#include "BloodWebRingPersistentData.generated.h"

USTRUCT()
struct FBloodWebRingPersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FBloodwebNode> NodeData;

public:
	DEADBYDAYLIGHT_API FBloodWebRingPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FBloodWebRingPersistentData) { return 0; }
