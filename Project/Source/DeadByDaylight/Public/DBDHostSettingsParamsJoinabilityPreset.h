#pragma once

#include "CoreMinimal.h"
#include "DBDHostSettingsParamsBase.h"
#include "DBDHostSettingsParamsJoinabilityPreset.generated.h"

UCLASS(NonTransient)
class UDBDHostSettingsParamsJoinabilityPreset : public UDBDHostSettingsParamsBase
{
	GENERATED_BODY()

public:
	UDBDHostSettingsParamsJoinabilityPreset();
};

FORCEINLINE uint32 GetTypeHash(const UDBDHostSettingsParamsJoinabilityPreset) { return 0; }
