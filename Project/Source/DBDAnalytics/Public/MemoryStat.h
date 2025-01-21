#pragma once

#include "CoreMinimal.h"
#include "MemoryStat.generated.h"

USTRUCT()
struct FMemoryStat
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
	DBDANALYTICS_API FMemoryStat();
};

FORCEINLINE uint32 GetTypeHash(const FMemoryStat) { return 0; }
