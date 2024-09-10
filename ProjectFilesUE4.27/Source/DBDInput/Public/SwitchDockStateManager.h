#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwitchDockStateManager.generated.h"

UCLASS()
class DBDINPUT_API USwitchDockStateManager : public UObject
{
	GENERATED_BODY()

public:
	USwitchDockStateManager();
};

FORCEINLINE uint32 GetTypeHash(const USwitchDockStateManager) { return 0; }
