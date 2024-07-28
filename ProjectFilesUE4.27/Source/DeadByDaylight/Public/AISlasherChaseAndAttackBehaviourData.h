#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AISlasherChaseAndAttackBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class UAISlasherChaseAndAttackBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACamperPlayer* _targetSurvivor;

	UPROPERTY(Transient)
	float _sqrtAttackRangeDistance;

	UPROPERTY(Transient)
	float _sqrtMaxTargetPositionDiff;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ACamperPlayer* targetSurvivor, float attackRangeDistance, float locationDistance);

public:
	UAISlasherChaseAndAttackBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherChaseAndAttackBehaviourData) { return 0; }
