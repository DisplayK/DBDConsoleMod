#pragma once

#include "CoreMinimal.h"
#include "ClaimableInboxMessage.h"
#include "UObject/NoExportTypes.h"
#include "EInboxMessageUIType.h"
#include "EInboxMessageUIState.h"
#include "InboxMessageUIData.generated.h"

USTRUCT(BlueprintType)
struct FInboxMessageUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FString MessageId;

	UPROPERTY(BlueprintReadOnly)
	FDateTime ReceivedTime;

	UPROPERTY(BlueprintReadOnly)
	EInboxMessageUIType MessageType;

	UPROPERTY(BlueprintReadOnly)
	FString MessageTitle;

	UPROPERTY(BlueprintReadOnly)
	FString MessageBody;

	UPROPERTY(BlueprintReadOnly)
	EInboxMessageUIState MessageState;

	UPROPERTY(BlueprintReadOnly)
	FClaimableInboxMessage AttachedClaimable;

public:
	DEADBYDAYLIGHT_API FInboxMessageUIData();
};

FORCEINLINE uint32 GetTypeHash(const FInboxMessageUIData) { return 0; }
