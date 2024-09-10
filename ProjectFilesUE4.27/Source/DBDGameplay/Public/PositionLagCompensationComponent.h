#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PositionLagCompensationComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPositionLagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _maxExtrapolationDurationInSeconds;

	UPROPERTY(EditAnywhere)
	float _maxInterpolationToServerMoveInSeconds;

public:
	UPositionLagCompensationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPositionLagCompensationComponent) { return 0; }
