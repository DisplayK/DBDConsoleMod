#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "AICharacterBehaviour.h"
#include "AITypes.h"
#include "AIMoveToInteract.generated.h"

class UAICharacterBehaviourData;
class UAIMoveToInteractData;
class ADBDAIPlayerController;
class ADBDPlayer;

UCLASS()
class UAIMoveToInteract : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UAIMoveToInteractData* _aiMoveToInteractData;

	UPROPERTY(Transient)
	ADBDAIPlayerController* _aiController;

private:
	UFUNCTION()
	void InteractionPointReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

public:
	UFUNCTION()
	void Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData);

public:
	UAIMoveToInteract();
};

FORCEINLINE uint32 GetTypeHash(const UAIMoveToInteract) { return 0; }
