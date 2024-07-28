#pragma once

#include "CoreMinimal.h"
#include "EArchiveNodeType.h"
#include "EStoryNodeState.h"
#include "EPlayerRole.h"
#include "ArchiveNodeObjectiveViewData.h"
#include "RewardWrapperViewData.h"
#include "ArchiveNodeViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EArchiveNodeType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoryNodeState Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FArchiveNodeObjectiveViewData> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FRewardWrapperViewData> Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FText> VignetteTitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole Role;

public:
	DBDUIVIEWINTERFACES_API FArchiveNodeViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNodeViewData) { return 0; }
