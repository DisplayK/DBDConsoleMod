#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebTunables.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebTunables : public UObject
{
	GENERATED_BODY()

public:
	UBloodwebTunables();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebTunables) { return 0; }
