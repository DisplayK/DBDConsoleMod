#pragma once

#include "CoreMinimal.h"
#include "StoryLevel.h"
#include "ArchivesMapFromS3.generated.h"

USTRUCT()
struct FArchivesMapFromS3
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FStoryLevel> Level;

	UPROPERTY()
	FString RiftId;

	UPROPERTY(SkipSerialization)
	bool RiftId_IsSet;

	UPROPERTY()
	FString SpecialEventId;

	UPROPERTY(SkipSerialization)
	bool SpecialEventId_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesMapFromS3();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesMapFromS3) { return 0; }
