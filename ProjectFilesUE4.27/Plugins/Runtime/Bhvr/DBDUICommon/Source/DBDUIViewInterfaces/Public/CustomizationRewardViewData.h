#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "RewardViewData.h"
#include "CustomizationTooltipViewData.h"
#include "EItemRarity.h"
#include "CustomizationRewardViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCustomizationRewardViewData: public FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName CustomizationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName OutfitId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnbreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomizationTooltipViewData TooltipData;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

public:
	DBDUIVIEWINTERFACES_API FCustomizationRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationRewardViewData) { return 0; }
