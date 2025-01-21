#pragma once

#include "CoreMinimal.h"
#include "EClaimableInboxMessageType.h"
#include "ClaimableInboxMessageData.generated.h"

USTRUCT(BlueprintType)
struct FClaimableInboxMessageData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	EClaimableInboxMessageType Type;

	UPROPERTY(BlueprintReadOnly)
	int32 Amount;

	UPROPERTY(BlueprintReadOnly)
	FString Id;

public:
	ONLINEMESSAGESUTILITIES_API FClaimableInboxMessageData();
};

FORCEINLINE uint32 GetTypeHash(const FClaimableInboxMessageData) { return 0; }
