#pragma once

#include "CoreMinimal.h"
#include "DBDHostSettingsParamsBase.h"
#include "DBDHostSettingsParamsSessionInvalid.generated.h"

UCLASS(NonTransient)
class UDBDHostSettingsParamsSessionInvalid : public UDBDHostSettingsParamsBase
{
	GENERATED_BODY()

public:
	UDBDHostSettingsParamsSessionInvalid();
};

FORCEINLINE uint32 GetTypeHash(const UDBDHostSettingsParamsSessionInvalid) { return 0; }
