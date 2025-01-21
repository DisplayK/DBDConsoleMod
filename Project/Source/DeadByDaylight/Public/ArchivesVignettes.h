#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ArchivesVignetteEntry.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesVignettes.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FArchivesVignettes: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString VignetteId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FArchivesVignetteEntry> Entries;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSoftObjectPtr<UMediaSource>> CinematicPaths;

public:
	DEADBYDAYLIGHT_API FArchivesVignettes();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignettes) { return 0; }
