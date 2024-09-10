#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EItemRarity.h"
#include "PriceViewData.h"
#include "CustomizationTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText ParentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText RarityPartInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CollectionDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText RoleCategoryInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnbreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOutfitPart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText OutfitInfoText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceViewData> Prices;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText CustomizationDisabledMessage;

public:
	DBDUIVIEWINTERFACES_API FCustomizationTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationTooltipViewData) { return 0; }
