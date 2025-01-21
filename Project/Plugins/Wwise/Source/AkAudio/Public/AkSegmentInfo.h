#pragma once

#include "CoreMinimal.h"
#include "AkSegmentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAkSegmentInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 CurrentPosition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 PreEntryDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ActiveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 PostExitDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 RemainingLookAheadTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BeatDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float BarDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float GridDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float GridOffset;

public:
	AKAUDIO_API FAkSegmentInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkSegmentInfo) { return 0; }
