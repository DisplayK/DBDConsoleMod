#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessageData.h"
#include "EClaimableInboxMessageState.h"
#include "ClaimableInboxMessage.generated.h"

USTRUCT(BlueprintType)
struct FClaimableInboxMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TArray<FClaimableInboxMessageData> Data;

	UPROPERTY(BlueprintReadOnly)
	EClaimableInboxMessageState State;

public:
	ONLINEMESSAGESUTILITIES_API FClaimableInboxMessage();
};

FORCEINLINE uint32 GetTypeHash(const FClaimableInboxMessage) { return 0; }
