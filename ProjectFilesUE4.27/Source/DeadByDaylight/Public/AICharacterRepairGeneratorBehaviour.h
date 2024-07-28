#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AICharacterRepairGeneratorBehaviour.generated.h"

class UAICharacterRepairGeneratorBehaviourData;
class ADBDPlayer;
class UInteractor;
class ADBDAIPlayerController;

UCLASS()
class UAICharacterRepairGeneratorBehaviour : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _aiPlayer;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _aiPlayerController;

	UPROPERTY(Transient, Export)
	UInteractor* _targetInteractor;

	UPROPERTY()
	UAICharacterRepairGeneratorBehaviourData* _characterRepairGeneratorData;

private:
	UFUNCTION()
	void OnMovementFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

	UFUNCTION()
	void OnGeneratorRepairedEventHandler(bool isAutoCompleted);

public:
	UAICharacterRepairGeneratorBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterRepairGeneratorBehaviour) { return 0; }
