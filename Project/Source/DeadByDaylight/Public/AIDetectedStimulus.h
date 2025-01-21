#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIDetectedStimulus.generated.h"

class AActor;

USTRUCT()
struct FAIDetectedStimulus
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TWeakObjectPtr<AActor> Instigator;

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	FVector Velocity;

	UPROPERTY()
	float AtTime;

public:
	DEADBYDAYLIGHT_API FAIDetectedStimulus();
};

FORCEINLINE uint32 GetTypeHash(const FAIDetectedStimulus) { return 0; }
