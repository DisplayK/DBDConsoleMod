#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EHelpType.h"
#include "HelpCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FHelpCategoryData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHelpType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> TopicIds;

public:
	DBDSHAREDTYPES_API FHelpCategoryData();
};

FORCEINLINE uint32 GetTypeHash(const FHelpCategoryData) { return 0; }
