#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "NavMeshObjectPlacementValidationStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UNavMeshObjectPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _navPathMaxLength;

public:
	UNavMeshObjectPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UNavMeshObjectPlacementValidationStrategy) { return 0; }
