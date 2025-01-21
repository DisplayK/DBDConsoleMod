#pragma once

#include "CoreMinimal.h"
#include "Counter.generated.h"

USTRUCT()
struct FCounter
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	float FloatValue;

	UPROPERTY()
	float FloatValueMin;

	UPROPERTY()
	float FloatValueMax;

public:
	DBDANALYTICS_API FCounter();
};

FORCEINLINE uint32 GetTypeHash(const FCounter) { return 0; }
