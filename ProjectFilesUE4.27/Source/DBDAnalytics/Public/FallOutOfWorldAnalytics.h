#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FallOutOfWorldAnalytics.generated.h"

USTRUCT()
struct FFallOutOfWorldAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString FallOutMirrorsId;

	UPROPERTY()
	float X;

	UPROPERTY()
	float Y;

	UPROPERTY()
	float Z;

	UPROPERTY()
	FString TileName;

	UPROPERTY()
	float ElapsedMatchTime;

public:
	DBDANALYTICS_API FFallOutOfWorldAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFallOutOfWorldAnalytics) { return 0; }
