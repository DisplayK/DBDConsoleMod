#pragma once

#include "CoreMinimal.h"
#include "ArmIKSensorComponent.h"
#include "SurvivorAimableArmSensor.generated.h"

class UAimableComponent;
class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDANIMATION_API USurvivorAimableArmSensor : public UArmIKSensorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACollectable* _aimableCollectable;

	UPROPERTY(Transient, Export)
	UAimableComponent* _aimable;

public:
	USurvivorAimableArmSensor();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimableArmSensor) { return 0; }
