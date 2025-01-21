#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "EruptionIconStrategy.generated.h"

UCLASS()
class THEK24_API UEruptionIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UEruptionIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UEruptionIconStrategy) { return 0; }
