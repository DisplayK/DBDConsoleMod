#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AIMoveToInteractData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAIMoveToInteractData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _interactActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _targetPositionActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterMovementTypes _characterMovementTypes;

public:
	UFUNCTION(BlueprintCallable)
	void Init(AActor* interactActor, ECharacterMovementTypes characterMovementTypes, AActor* targetPositionActor);

public:
	UAIMoveToInteractData();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToInteractData) { return 0; }
