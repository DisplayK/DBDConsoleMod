#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "CheatExecutedAnalytics.generated.h"

USTRUCT()
struct FCheatExecutedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Command;

	UPROPERTY()
	FString Type;

	UPROPERTY()
	bool Successful;

public:
	DBDANALYTICS_API FCheatExecutedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCheatExecutedAnalytics) { return 0; }
