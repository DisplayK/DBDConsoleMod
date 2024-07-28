#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRandomByDistancePercentagesAtTime.generated.h"

USTRUCT()
struct FAIRandomByDistancePercentagesAtTime
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAITunableParameter PercentageAtStartDistance;

	UPROPERTY(EditAnywhere)
	FAITunableParameter PercentageAtEndDistance;

	UPROPERTY(EditAnywhere)
	FAITunableParameter AtRelativeTime;

public:
	DBDBOTS_API FAIRandomByDistancePercentagesAtTime();
};

FORCEINLINE uint32 GetTypeHash(const FAIRandomByDistancePercentagesAtTime) { return 0; }
