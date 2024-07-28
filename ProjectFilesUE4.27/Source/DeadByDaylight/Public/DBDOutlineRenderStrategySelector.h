#pragma once

#include "CoreMinimal.h"
#include "DBDOutlineRenderStrategySelector.generated.h"

class AActor;
class UBaseOutlineRenderStrategy;

USTRUCT(BlueprintType)
struct FDBDOutlineRenderStrategySelector
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AActor* _actorForStrategy;

	UPROPERTY(Transient)
	UBaseOutlineRenderStrategy* _selectedStrategy;

public:
	DEADBYDAYLIGHT_API FDBDOutlineRenderStrategySelector();
};

FORCEINLINE uint32 GetTypeHash(const FDBDOutlineRenderStrategySelector) { return 0; }
