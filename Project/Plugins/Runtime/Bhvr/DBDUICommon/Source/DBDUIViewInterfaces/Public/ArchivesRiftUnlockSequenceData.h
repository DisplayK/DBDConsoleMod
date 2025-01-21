#pragma once

#include "CoreMinimal.h"
#include "ArchivesRiftUnlockSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesRiftUnlockSequenceData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(BlueprintReadWrite)
	int32 PreviousTier;

	UPROPERTY(BlueprintReadWrite)
	bool IsPremiumUnlocked;

public:
	DBDUIVIEWINTERFACES_API FArchivesRiftUnlockSequenceData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesRiftUnlockSequenceData) { return 0; }
