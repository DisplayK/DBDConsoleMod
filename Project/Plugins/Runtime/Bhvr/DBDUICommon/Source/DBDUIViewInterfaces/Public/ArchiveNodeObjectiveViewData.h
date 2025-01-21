#pragma once

#include "CoreMinimal.h"
#include "EQuestProgressionType.h"
#include "ArchiveNodeObjectiveViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeObjectiveViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 MaxProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EQuestProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCommunityObjective;

public:
	DBDUIVIEWINTERFACES_API FArchiveNodeObjectiveViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNodeObjectiveViewData) { return 0; }
