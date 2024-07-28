#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterHideInLockerBehaviour.generated.h"

class ADBDAIPlayerController;
class UAICharacterHideInLockerBehaviourData;
class ADBDPlayer;

UCLASS()
class UAICharacterHideInLockerBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _aiPlayer;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _aiPlayerController;

	UPROPERTY()
	UAICharacterHideInLockerBehaviourData* _characterHideInLockerData;

private:
	UFUNCTION()
	void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UAICharacterHideInLockerBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterHideInLockerBehaviour) { return 0; }
