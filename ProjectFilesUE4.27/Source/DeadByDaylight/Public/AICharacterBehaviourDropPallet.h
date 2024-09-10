#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourInteractWithActor.h"
#include "AICharacterBehaviourDropPallet.generated.h"

class APallet;

UCLASS()
class UAICharacterBehaviourDropPallet : public UAICharacterBehaviourInteractWithActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	APallet* _targetPallet;

public:
	UAICharacterBehaviourDropPallet();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourDropPallet) { return 0; }
