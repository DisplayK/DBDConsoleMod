#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementValidationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DefaultObjectPlacementValidationStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDefaultObjectPlacementValidationStrategy : public UObjectPlacementValidationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FVector _objectPlacementRaycastStart;

	UPROPERTY(EditDefaultsOnly)
	FVector _objectPlacementRaycastEnd;

	UPROPERTY(EditDefaultsOnly)
	FFloatRange _objectHeightRangeAroundBaseLocation;

public:
	UDefaultObjectPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDefaultObjectPlacementValidationStrategy) { return 0; }
