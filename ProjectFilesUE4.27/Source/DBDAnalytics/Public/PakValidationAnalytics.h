#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PakValidationAnalytics.generated.h"

USTRUCT()
struct FPakValidationAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ErrorType;

	UPROPERTY()
	FString Filename;

	UPROPERTY()
	int32 ChunkIndex;

	UPROPERTY()
	uint32 ReceivedHash;

public:
	DBDANALYTICS_API FPakValidationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPakValidationAnalytics) { return 0; }
