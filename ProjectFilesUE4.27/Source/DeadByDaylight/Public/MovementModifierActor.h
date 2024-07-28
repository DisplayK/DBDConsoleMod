#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovementModifierActor.generated.h"

UCLASS()
class AMovementModifierActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeedMultiplier;

public:
	AMovementModifierActor();
};

FORCEINLINE uint32 GetTypeHash(const AMovementModifierActor) { return 0; }
