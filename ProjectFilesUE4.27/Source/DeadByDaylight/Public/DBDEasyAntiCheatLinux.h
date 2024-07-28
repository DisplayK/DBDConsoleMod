#pragma once

#include "CoreMinimal.h"
#include "DBDEasyAntiCheatEnable.h"
#include "DBDEasyAntiCheatLinux.generated.h"

UCLASS()
class UDBDEasyAntiCheatLinux : public UDBDEasyAntiCheatEnable
{
	GENERATED_BODY()

public:
	UDBDEasyAntiCheatLinux();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEasyAntiCheatLinux) { return 0; }
