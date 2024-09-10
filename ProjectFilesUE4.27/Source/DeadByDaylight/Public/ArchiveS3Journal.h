#pragma once

#include "CoreMinimal.h"
#include "ArchiveS3Journal.generated.h"

USTRUCT()
struct FArchiveS3Journal
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Nodes;

	UPROPERTY()
	int32 StartingPages;

public:
	DEADBYDAYLIGHT_API FArchiveS3Journal();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveS3Journal) { return 0; }
