#pragma once

#include "CoreMinimal.h"
#include "ArchiveNodeViewData.h"
#include "ArchiveChallengeReminderViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveChallengeReminderViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FArchiveNodeViewData NodeViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TomeSourceSubtitle;

public:
	DBDUIVIEWINTERFACES_API FArchiveChallengeReminderViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveChallengeReminderViewData) { return 0; }
