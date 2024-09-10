#pragma once

#include "CoreMinimal.h"
#include "EAtlantaRitualRewardUIType.h"
#include "EItemRarity.h"
#include "AtlantaRitualRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualRewardUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	EAtlantaRitualRewardUIType Type;

	UPROPERTY(BlueprintReadOnly)
	int32 Quantity;

	UPROPERTY(BlueprintReadOnly)
	FString IconFilePath;

	UPROPERTY(BlueprintReadOnly)
	EItemRarity Rarity;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualRewardUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualRewardUIData) { return 0; }
