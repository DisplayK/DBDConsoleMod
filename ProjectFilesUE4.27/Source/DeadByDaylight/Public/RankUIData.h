#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "Styling/SlateColor.h"
#include "UObject/SoftObjectPtr.h"
#include "RankUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRankUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Frame;

public:
	DEADBYDAYLIGHT_API FRankUIData();
};

FORCEINLINE uint32 GetTypeHash(const FRankUIData) { return 0; }
