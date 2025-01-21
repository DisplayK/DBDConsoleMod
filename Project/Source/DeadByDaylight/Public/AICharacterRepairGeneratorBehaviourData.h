#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterRepairGeneratorBehaviourData.generated.h"

class AGenerator;

UCLASS(BlueprintType)
class UAICharacterRepairGeneratorBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AGenerator* _generator;

	UPROPERTY(Transient)
	ECharacterMovementTypes _characterMovementType;

public:
	UFUNCTION(BlueprintCallable)
	void Init(AGenerator* generator, ECharacterMovementTypes characterMovementType);

public:
	UAICharacterRepairGeneratorBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterRepairGeneratorBehaviourData) { return 0; }
