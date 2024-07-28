#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GachaCrateManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGachaCrateManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UGachaCrateManager();
};

FORCEINLINE uint32 GetTypeHash(const UGachaCrateManager) { return 0; }
