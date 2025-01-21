#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AICharacterEscapeCarried.generated.h"

class ACamperPlayer;
class UAICharacterEscapeCarriedData;

UCLASS()
class UAICharacterEscapeCarried : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACamperPlayer* _camperPlayer;

	UPROPERTY(Transient)
	UAICharacterEscapeCarriedData* _behaviourData;

public:
	UAICharacterEscapeCarried();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterEscapeCarried) { return 0; }
