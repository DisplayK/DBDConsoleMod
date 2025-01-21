#pragma once

#include "CoreMinimal.h"
#include "DBDInitPlayerQueryYesNo.h"
#include "DBDInitPlayerQueryYesNoSizeWifi.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDInitPlayerQueryYesNoSizeWifi : public UDBDInitPlayerQueryYesNo
{
	GENERATED_BODY()

public:
	UDBDInitPlayerQueryYesNoSizeWifi();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInitPlayerQueryYesNoSizeWifi) { return 0; }
