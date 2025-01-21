#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterHideInLockerBehaviourData.generated.h"

class ALocker;

UCLASS(BlueprintType)
class UAICharacterHideInLockerBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ALocker* TargetLocker;

	UPROPERTY(Transient)
	ECharacterMovementTypes CharacterMovementType;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ALocker* locker, ECharacterMovementTypes characterMovementTypeNew);

public:
	UAICharacterHideInLockerBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterHideInLockerBehaviourData) { return 0; }
