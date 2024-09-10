#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIHealAllyBehaviour.generated.h"

class ADBDAIPlayerController;
class UAIHealAllyBehaviourData;
class ADBDPlayer;
class UAICharacterBehaviourData;

UCLASS()
class UAIHealAllyBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UAIHealAllyBehaviourData* _behaviourData;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _aiController;

	UPROPERTY(Transient)
	ADBDPlayer* _aiPlayer;

private:
	UFUNCTION()
	void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION()
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIHealAllyBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAIHealAllyBehaviour) { return 0; }
