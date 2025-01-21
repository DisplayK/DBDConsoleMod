#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessageData.h"
#include "InboxMessageData.generated.h"

USTRUCT()
struct FInboxMessageData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int64 Id;

	UPROPERTY(Transient)
	FString Origin;

	UPROPERTY(Transient)
	FString RecipientId;

	UPROPERTY(Transient)
	int64 ReceivedTimestamp;

	UPROPERTY(Transient)
	FString Subject;

	UPROPERTY(Transient)
	FString Body;

	UPROPERTY(Transient)
	TArray<FClaimableInboxMessageData> Claimable;

	UPROPERTY(Transient)
	bool AreRewardsClaimed;

	UPROPERTY(Transient)
	bool IsRead;

	UPROPERTY(Transient)
	int64 ExpireTimestamp;

public:
	ONLINEMESSAGESUTILITIES_API FInboxMessageData();
};

FORCEINLINE uint32 GetTypeHash(const FInboxMessageData) { return 0; }
