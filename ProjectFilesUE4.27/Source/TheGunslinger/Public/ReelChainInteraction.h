#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "ReelChainInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UReelChainInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _frontMovementAngle;

	UPROPERTY(EditAnywhere)
	float _minimumFrontVelocity;

	UPROPERTY(Transient)
	ADBDPlayer* _linkedPlayer;

public:
	UReelChainInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UReelChainInteraction) { return 0; }
