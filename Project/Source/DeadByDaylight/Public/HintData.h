#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EHintCategory.h"
#include "HintData.generated.h"

USTRUCT(BlueprintType)
struct FHintData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHintCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 levelMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 levelMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 relevantCharacterID;

public:
	DEADBYDAYLIGHT_API FHintData();
};

FORCEINLINE uint32 GetTypeHash(const FHintData) { return 0; }
