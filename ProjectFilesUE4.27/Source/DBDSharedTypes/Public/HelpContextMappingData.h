#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "HelpContextMappingData.generated.h"

USTRUCT(BlueprintType)
struct FHelpContextMappingData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> TopicIds;

public:
	DBDSHAREDTYPES_API FHelpContextMappingData();
};

FORCEINLINE uint32 GetTypeHash(const FHelpContextMappingData) { return 0; }
