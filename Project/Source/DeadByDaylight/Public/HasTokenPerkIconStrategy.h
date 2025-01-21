#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "HasTokenPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHasTokenPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UHasTokenPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHasTokenPerkIconStrategy) { return 0; }
