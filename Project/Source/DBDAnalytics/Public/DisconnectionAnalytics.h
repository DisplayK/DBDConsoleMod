#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DisconnectionAnalytics.generated.h"

USTRUCT()
struct FDisconnectionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float TimeSinceLastPacket;

	UPROPERTY()
	FString GameFlowStep;

	UPROPERTY()
	FString UnrealMapName;

	UPROPERTY()
	FString MapName;

	UPROPERTY()
	FString ThemeName;

	UPROPERTY()
	FString FailureType;

	UPROPERTY()
	FString ErrorString;

	UPROPERTY()
	FString MatchId;

public:
	DBDANALYTICS_API FDisconnectionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDisconnectionAnalytics) { return 0; }
