#pragma once

#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "DBDGameEngine.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UDBDGameEngine : public UGameEngine
{
	GENERATED_BODY()

public:
	UDBDGameEngine();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameEngine) { return 0; }
