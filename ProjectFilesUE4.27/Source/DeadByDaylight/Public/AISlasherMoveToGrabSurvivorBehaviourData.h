#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "AISlasherMoveToGrabSurvivorBehaviourData.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType)
class UAISlasherMoveToGrabSurvivorBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACamperPlayer* _targetSurvivor;

public:
	UFUNCTION(BlueprintCallable)
	void Init(ACamperPlayer* targetSurvivor);

public:
	UAISlasherMoveToGrabSurvivorBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherMoveToGrabSurvivorBehaviourData) { return 0; }
