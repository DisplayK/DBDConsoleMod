#pragma once

#include "CoreMinimal.h"
#include "ArchivesVignetteEntryViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesVignetteEntryViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsRead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasAudio;

public:
	DBDUIVIEWINTERFACES_API FArchivesVignetteEntryViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteEntryViewData) { return 0; }
