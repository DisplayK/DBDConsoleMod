#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "DemogorgonPortalPlacementValidationStrategy.generated.h"

class UDemogorgonPortalPlacerStateComponent;
class UChargedAttackStateComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalPlacementValidationStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(Transient, Export)
	UChargedAttackStateComponent* _chargedAttackState;

	UPROPERTY(EditDefaultsOnly)
	float _distanceForWorldCollisionDetection;

	UPROPERTY(EditDefaultsOnly)
	float _numberOfGroundTest;

	UPROPERTY(EditDefaultsOnly)
	float _portalEdgeTestRadius;

	UPROPERTY(EditDefaultsOnly)
	float _maxElevationDifferentialOnPortalEdge;

public:
	UDemogorgonPortalPlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalPlacementValidationStrategy) { return 0; }
