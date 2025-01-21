#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterEvasionBehaviour.generated.h"

class ADBDPlayer;
class AActor;
class ADBDAIPlayerController;
class UCharacterEvasionBehaviourData;

UCLASS()
class UAICharacterEvasionBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _prey;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _preyAIController;

	UPROPERTY(Transient)
	AActor* _currentEscapePoint;

	UPROPERTY()
	UCharacterEvasionBehaviourData* _characterEvasionData;

private:
	UFUNCTION()
	void EscapeDestinationReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UAICharacterEvasionBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterEvasionBehaviour) { return 0; }
