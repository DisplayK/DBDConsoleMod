#pragma once

#include "CoreMinimal.h"
#include "Stat.generated.h"

USTRUCT()
struct FStat
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
	DBDANALYTICS_API FStat();
};

FORCEINLINE uint32 GetTypeHash(const FStat) { return 0; }
