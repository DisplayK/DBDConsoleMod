#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "K28SurvivorAbductionCameraBehaviourComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28SurvivorAbductionCameraBehaviourComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _targetSpringArmLength;

	UPROPERTY(EditDefaultsOnly)
	float _targetLockerOffsetForCameraView;

	UPROPERTY(EditDefaultsOnly)
	FVector2D _cameraLocationOffset;

public:
	UK28SurvivorAbductionCameraBehaviourComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorAbductionCameraBehaviourComponent) { return 0; }
