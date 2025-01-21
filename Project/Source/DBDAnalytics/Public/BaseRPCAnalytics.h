#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "BaseRPCAnalytics.generated.h"

USTRUCT()
struct FBaseRPCAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Sender;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString MatchType;

	UPROPERTY()
	FString Role;

	UPROPERTY()
	int32 CharacterId;

	UPROPERTY()
	FString CharacterName;

public:
	DBDANALYTICS_API FBaseRPCAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseRPCAnalytics) { return 0; }
