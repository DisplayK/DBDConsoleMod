#pragma once

#include "CoreMinimal.h"
#include "NamedRPCCount.generated.h"

USTRUCT()
struct FNamedRPCCount
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Count;

public:
	DBDANALYTICS_API FNamedRPCCount();
};

FORCEINLINE uint32 GetTypeHash(const FNamedRPCCount) { return 0; }
