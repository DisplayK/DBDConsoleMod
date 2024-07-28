#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "HelpTopicData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHelpTopicData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VideoID;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

public:
	DBDSHAREDTYPES_API FHelpTopicData();
};

FORCEINLINE uint32 GetTypeHash(const FHelpTopicData) { return 0; }
