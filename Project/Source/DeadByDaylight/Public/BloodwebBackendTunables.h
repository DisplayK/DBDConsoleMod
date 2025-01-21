#pragma once

#include "CoreMinimal.h"
#include "BloodwebTunables.h"
#include "BloodwebBackendTunables.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebBackendTunables : public UBloodwebTunables
{
	GENERATED_BODY()

public:
	UBloodwebBackendTunables();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebBackendTunables) { return 0; }
