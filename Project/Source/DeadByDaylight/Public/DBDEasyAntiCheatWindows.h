#pragma once

#include "CoreMinimal.h"
#include "DBDEasyAntiCheatEnable.h"
#include "DBDEasyAntiCheatWindows.generated.h"

UCLASS()
class UDBDEasyAntiCheatWindows : public UDBDEasyAntiCheatEnable
{
	GENERATED_BODY()

public:
	UDBDEasyAntiCheatWindows();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEasyAntiCheatWindows) { return 0; }
