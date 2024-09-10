#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ChatAnalytics.generated.h"

USTRUCT()
struct FChatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString SenderMirrorsId;

	UPROPERTY()
	FString SenderPlayerName;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString ChatContent;

	UPROPERTY()
	FString OriginalChatContent;

	UPROPERTY()
	FString ChatContext;

	UPROPERTY()
	FString InGameTimestamp;

public:
	DBDANALYTICS_API FChatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FChatAnalytics) { return 0; }
