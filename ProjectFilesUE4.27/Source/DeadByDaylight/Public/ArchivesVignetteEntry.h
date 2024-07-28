#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ArchivesVignetteEntry.generated.h"

USTRUCT(BlueprintType)
struct FArchivesVignetteEntry: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool HasAudio;

public:
	DEADBYDAYLIGHT_API FArchivesVignetteEntry();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteEntry) { return 0; }
