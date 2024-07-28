#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICharacterBehaviourData.generated.h"

UCLASS()
class UAICharacterBehaviourData : public UObject
{
	GENERATED_BODY()

public:
	UAICharacterBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourData) { return 0; }
