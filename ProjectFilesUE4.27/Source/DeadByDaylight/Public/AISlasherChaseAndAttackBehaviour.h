#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AISlasherChaseAndAttackBehaviour.generated.h"

class UAISlasherChaseAndAttackBehaviourData;
class ASlasherPlayer;
class ADBDAIPlayerController;

UCLASS()
class UAISlasherChaseAndAttackBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UAISlasherChaseAndAttackBehaviourData* _behaviourData;

	UPROPERTY(Transient)
	ASlasherPlayer* _slasherPlayer;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _slasherAIPlayerController;

public:
	UAISlasherChaseAndAttackBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAISlasherChaseAndAttackBehaviour) { return 0; }
