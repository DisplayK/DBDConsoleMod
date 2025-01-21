#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "SurvivorCollectableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorCollectableOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _outlineColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _nearlyConsumedColor;

public:
	USurvivorCollectableOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorCollectableOutlineUpdateStrategy) { return 0; }
