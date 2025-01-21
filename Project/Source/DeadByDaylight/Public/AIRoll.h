#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRoll.generated.h"

USTRUCT()
struct FAIRoll
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAITunableParameter Random;

	UPROPERTY(EditAnywhere)
	FAITunableParameter OnFailCooldown;

public:
	DEADBYDAYLIGHT_API FAIRoll();
};

FORCEINLINE uint32 GetTypeHash(const FAIRoll) { return 0; }
