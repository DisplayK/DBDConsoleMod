#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesPastTomeViewData.generated.h"

class UArchiveStoryLevelViewData;
class UTexture2D;

USTRUCT(BlueprintType)
struct FArchivesPastTomeViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TomeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TomeTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasActiveNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 VolumeIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UArchiveStoryLevelViewData*> TomeLevels;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	TSoftObjectPtr<UTexture2D> StoryBookMarkTexture;

public:
	DBDUIVIEWINTERFACES_API FArchivesPastTomeViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesPastTomeViewData) { return 0; }
