#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "WallGrabInteractionDefinition.generated.h"

class UBlightPowerStateComponent;
class ABlightPowerEstimatedCollisionIndicator;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWallGrabInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wallDashAccelerationMultiplier;

	UPROPERTY(Transient)
	ABlightPowerEstimatedCollisionIndicator* _blightPowerCollisionIndicator;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABlightPowerEstimatedCollisionIndicator> _collisionIndicatorActorClass;

public:
	UWallGrabInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UWallGrabInteractionDefinition) { return 0; }
