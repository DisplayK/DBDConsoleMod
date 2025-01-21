#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "ExecExecutedAnalytics.generated.h"

USTRUCT()
struct FExecExecutedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Command;

	UPROPERTY()
	bool Executed;

public:
	DBDANALYTICS_API FExecExecutedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FExecExecutedAnalytics) { return 0; }
