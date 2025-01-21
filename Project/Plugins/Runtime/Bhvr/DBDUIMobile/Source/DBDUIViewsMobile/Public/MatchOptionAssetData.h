#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MatchOptionAssetData.generated.h"

class UPaperSprite;

USTRUCT()
struct FMatchOptionAssetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText TextName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UPaperSprite> Icon;

public:
	DBDUIVIEWSMOBILE_API FMatchOptionAssetData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchOptionAssetData) { return 0; }
