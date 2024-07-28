#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CompendiumButtonData.generated.h"

class UArchiveStoryLevelViewData;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCompendiumButtonData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TomeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TomeTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMastered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VolumeIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UArchiveStoryLevelViewData*> TomeLevels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> StoryBookMarkTexture;

public:
	DBDUIVIEWINTERFACES_API FCompendiumButtonData();
};

FORCEINLINE uint32 GetTypeHash(const FCompendiumButtonData) { return 0; }
