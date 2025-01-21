#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.generated.h"

USTRUCT()
struct FAITunableParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float DefaultValue;

	UPROPERTY(EditInstanceOnly)
	FName TunableName;

public:
	DEADBYDAYLIGHT_API FAITunableParameter();
};

FORCEINLINE uint32 GetTypeHash(const FAITunableParameter) { return 0; }
