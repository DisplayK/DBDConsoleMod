#pragma once

#include "CoreMinimal.h"
#include "ArmIKSensorDatum.h"
#include "Components/ActorComponent.h"
#include "EArm.h"
#include "ArmIKSensorComponent.generated.h"

class UCameraComponent;
class USkeletalMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UArmIKSensorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TMap<EArm, FArmIKSensorDatum> _arms;

private:
	UPROPERTY(EditAnywhere)
	float _capsuleRadius;

	UPROPERTY(EditAnywhere)
	float _capsuleHalfHeight;

	UPROPERTY(EditAnywhere)
	float _traceLength;

	UPROPERTY(Transient, Export)
	UCameraComponent* _owningCamera;

public:
	UArmIKSensorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UArmIKSensorComponent) { return 0; }
