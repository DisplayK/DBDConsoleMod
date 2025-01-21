#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourInteractWithActor.h"
#include "AICharacterBehaviourInteractWithHook.generated.h"

class AMeatHook;

UCLASS()
class UAICharacterBehaviourInteractWithHook : public UAICharacterBehaviourInteractWithActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AMeatHook* _targetHook;

public:
	UAICharacterBehaviourInteractWithHook();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourInteractWithHook) { return 0; }
