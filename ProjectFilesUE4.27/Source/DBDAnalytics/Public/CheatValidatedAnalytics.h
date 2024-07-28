#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "CheatValidatedAnalytics.generated.h"

USTRUCT()
struct FCheatValidatedAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Command;

	UPROPERTY()
	FString Type;

	UPROPERTY()
	bool Validated;

public:
	DBDANALYTICS_API FCheatValidatedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCheatValidatedAnalytics) { return 0; }
