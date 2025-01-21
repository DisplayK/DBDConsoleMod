#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveNodeViewData.h"
#include "ArchiveNodeGraphViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveNodeGraphViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FArchiveNodeViewData ViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector2D Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> Neighbors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<int32> PathIndices;

public:
	DBDUIVIEWINTERFACES_API FArchiveNodeGraphViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveNodeGraphViewData) { return 0; }
