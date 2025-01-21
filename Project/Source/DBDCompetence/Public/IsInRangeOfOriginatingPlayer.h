#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsInRangeOfOriginatingPlayer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsInRangeOfOriginatingPlayer : public URangeBasedCondition
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnInRangeChanged(const bool inRange);

public:
	UIsInRangeOfOriginatingPlayer();
};

FORCEINLINE uint32 GetTypeHash(const UIsInRangeOfOriginatingPlayer) { return 0; }
