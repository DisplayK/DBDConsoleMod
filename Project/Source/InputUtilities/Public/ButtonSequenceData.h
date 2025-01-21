#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ButtonSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FButtonSequenceData: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SequenceId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Sequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Timeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Platforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinKeysForFailedAttempt;

public:
	INPUTUTILITIES_API FButtonSequenceData();
};

FORCEINLINE uint32 GetTypeHash(const FButtonSequenceData) { return 0; }
