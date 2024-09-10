#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EArchivesStoryLevelStatus.h"
#include "ArchiveStoryLevelViewData.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UArchiveStoryLevelViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EArchivesStoryLevelStatus Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime StartDate;

public:
	UArchiveStoryLevelViewData();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveStoryLevelViewData) { return 0; }
