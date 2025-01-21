#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EArchivePathStatus.h"
#include "ArchiveMapPathViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveMapPathViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector2D StartPositon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector2D EndPositon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName StartNodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName EndNodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EArchivePathStatus Status;

public:
	DBDUIVIEWINTERFACES_API FArchiveMapPathViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveMapPathViewData) { return 0; }
