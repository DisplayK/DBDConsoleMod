#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "EArchiveMenuState.h"
#include "ArchiveTomeSkinData.h"
#include "ArchiveTomeSkinUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FArchiveTomeSkinUIDataRow: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EArchiveMenuState menuState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FArchiveTomeSkinData ArchiveSkinData;

public:
	DBDSHAREDTYPES_API FArchiveTomeSkinUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveTomeSkinUIDataRow) { return 0; }
