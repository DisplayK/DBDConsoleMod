#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SpecialEventLoadingTextData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventLoadingTextData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

public:
	DEADBYDAYLIGHT_API FSpecialEventLoadingTextData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventLoadingTextData) { return 0; }
