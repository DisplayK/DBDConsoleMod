#pragma once

#include "CoreMinimal.h"
#include "AtlantaTutorialTallyData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialTallyData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool IsKiller;

	UPROPERTY(BlueprintReadWrite)
	bool FirstTimeCompleted;

	UPROPERTY(BlueprintReadWrite)
	int32 BloodpointsScore;

	UPROPERTY(BlueprintReadWrite)
	int32 AuricCells;

	UPROPERTY(BlueprintReadWrite)
	int32 FearTokens;

	UPROPERTY(BlueprintReadWrite)
	TArray<FName> Characters;

public:
	DEADBYDAYLIGHT_API FAtlantaTutorialTallyData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaTutorialTallyData) { return 0; }
