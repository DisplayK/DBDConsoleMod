#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIMoveToPosition.generated.h"

class ADBDPlayer;
class UAIMoveToPositionData;
class ADBDAIPlayerController;
class UAICharacterBehaviourData;

UCLASS()
class UAIMoveToPosition : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UAIMoveToPositionData* _aiBehaviourData;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _aiController;

private:
	UFUNCTION()
	void TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION()
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIMoveToPosition();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToPosition) { return 0; }
