#pragma once

#include "CoreMinimal.h"
#include "BloodwebTunables.h"
#include "BloodwebClientTunables.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBloodwebClientTunables : public UBloodwebTunables
{
	GENERATED_BODY()

public:
	UBloodwebClientTunables();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebClientTunables) { return 0; }
