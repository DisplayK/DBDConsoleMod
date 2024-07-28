#pragma once

#include "CoreMinimal.h"
#include "LamentConfigurationPlayerPossessionData.generated.h"

USTRUCT()
struct FLamentConfigurationPlayerPossessionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float PickUpElapsedMatchTime;

	UPROPERTY()
	float DropElapsedMatchTime;

	UPROPERTY()
	FString Outcome;

public:
	THEK25_API FLamentConfigurationPlayerPossessionData();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationPlayerPossessionData) { return 0; }
