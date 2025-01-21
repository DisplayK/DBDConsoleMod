#pragma once

#include "CoreMinimal.h"
#include "ArchivesVignetteEntryViewData.h"
#include "ArchivesVignetteViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesVignetteViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString VignetteId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 LastShownProgressValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 MaxProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CinematicsNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FArchivesVignetteEntryViewData> Entries;

public:
	DBDUIVIEWINTERFACES_API FArchivesVignetteViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteViewData) { return 0; }
