#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveWhenApplicableAndNotCampingPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActiveWhenApplicableAndNotCampingPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveWhenApplicableAndNotCampingPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveWhenApplicableAndNotCampingPerkIconStrategy) { return 0; }
