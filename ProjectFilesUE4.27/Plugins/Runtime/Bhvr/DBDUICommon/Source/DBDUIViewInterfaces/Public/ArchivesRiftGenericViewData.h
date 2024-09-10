#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchivesRiftGenericViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesRiftGenericViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FDateTime EndDate;

	UPROPERTY(BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(BlueprintReadWrite)
	int32 MaxTier;

	UPROPERTY(BlueprintReadWrite)
	int32 CurrentStars;

	UPROPERTY(BlueprintReadWrite)
	int32 StarsPerTiers;

	UPROPERTY(BlueprintReadWrite)
	bool OwnPass;

	UPROPERTY(BlueprintReadWrite)
	bool ShowBonusTierTooltip;

public:
	DBDUIVIEWINTERFACES_API FArchivesRiftGenericViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesRiftGenericViewData) { return 0; }
