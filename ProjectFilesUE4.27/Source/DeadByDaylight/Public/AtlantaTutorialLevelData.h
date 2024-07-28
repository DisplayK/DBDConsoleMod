#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaTutorialLevelData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialLevelData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKillerTutorial;

public:
	DEADBYDAYLIGHT_API FAtlantaTutorialLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaTutorialLevelData) { return 0; }
