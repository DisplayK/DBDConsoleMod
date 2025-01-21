#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClaimStatus.generated.h"

USTRUCT()
struct FClaimStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	bool isSet;

	UPROPERTY(Transient)
	int32 LastClaimedIndex;

	UPROPERTY(Transient)
	FDateTime NextClaimTime;

public:
	RETENTIONREWARDSUTILITIES_API FClaimStatus();
};

FORCEINLINE uint32 GetTypeHash(const FClaimStatus) { return 0; }
