#pragma once

#include "CoreMinimal.h"
#include "DBDEasyAntiCheat.h"
#include "DBDEasyAntiCheatEnable.generated.h"

UCLASS()
class UDBDEasyAntiCheatEnable : public UDBDEasyAntiCheat
{
	GENERATED_BODY()

public:
	UDBDEasyAntiCheatEnable();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEasyAntiCheatEnable) { return 0; }
