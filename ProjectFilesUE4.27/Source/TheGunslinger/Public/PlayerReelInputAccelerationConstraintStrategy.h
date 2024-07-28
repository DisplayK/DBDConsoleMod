#pragma once

#include "CoreMinimal.h"
#include "BaseInputAccelerationConstraintStrategy.h"
#include "PlayerReelInputAccelerationConstraintStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UPlayerReelInputAccelerationConstraintStrategy : public UBaseInputAccelerationConstraintStrategy
{
	GENERATED_BODY()

public:
	UPlayerReelInputAccelerationConstraintStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerReelInputAccelerationConstraintStrategy) { return 0; }
