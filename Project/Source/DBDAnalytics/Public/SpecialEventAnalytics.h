#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "SpecialEventAnalytics.generated.h"

USTRUCT()
struct FSpecialEventAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EPlayerRole Role;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FName EventName;

	UPROPERTY()
	FName Challenge;

	UPROPERTY()
	int32 Amount;

	UPROPERTY()
	int32 CummulativeAmount;

public:
	DBDANALYTICS_API FSpecialEventAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventAnalytics) { return 0; }
