#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDParadiseGameMode.generated.h"

UCLASS(NonTransient)
class ADBDParadiseGameMode : public ADBDBaseGameMode
{
	GENERATED_BODY()

public:
	ADBDParadiseGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDParadiseGameMode) { return 0; }
