#pragma once

#include "CoreMinimal.h"
#include "DBDHostSettingsParamsBase.h"
#include "DBDHostSettingsParamsRanking.generated.h"

UCLASS(NonTransient)
class UDBDHostSettingsParamsRanking : public UDBDHostSettingsParamsBase
{
	GENERATED_BODY()

public:
	UDBDHostSettingsParamsRanking();
};

FORCEINLINE uint32 GetTypeHash(const UDBDHostSettingsParamsRanking) { return 0; }
