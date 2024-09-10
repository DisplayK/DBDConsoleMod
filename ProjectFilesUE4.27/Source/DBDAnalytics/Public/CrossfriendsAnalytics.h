#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrossfriendsAnalytics.generated.h"

USTRUCT()
struct FCrossfriendsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Action;

	UPROPERTY()
	FString TargetKrakenUserId;

public:
	DBDANALYTICS_API FCrossfriendsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrossfriendsAnalytics) { return 0; }
