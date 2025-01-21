#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ZombieFallDetectorComponent.generated.h"

class ACharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieFallDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieDistanceConsideredSmashFall;

private:
	UFUNCTION()
	void Authority_OnMovementModeChange(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

public:
	UZombieFallDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieFallDetectorComponent) { return 0; }
