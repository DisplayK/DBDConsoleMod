#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RPCMonitor.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URPCMonitor : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URPCMonitor();
};

FORCEINLINE uint32 GetTypeHash(const URPCMonitor) { return 0; }
