#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "InventorySlotData.h"
#include "UMGPageScrollWidget.h"
#include "EInventoryGridFormat.h"
#include "UMGLoadoutPageScrollWidget.generated.h"

class UUMGLoadoutItemButton;

UCLASS(EditInlineNew)
class UUMGLoadoutPageScrollWidget : public UUMGPageScrollWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	bool ShouldResizeWidget;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGLoadoutItemButton> _itemWidgetClass;

	UPROPERTY(BlueprintReadOnly, Transient)
	EInventoryGridFormat _gridFormat;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FInventorySlotData> _inventoryData;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<int32> _inventorySelectedItemIndexes;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString _subtitle;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetItemWidgetClass();

	UFUNCTION(BlueprintImplementableEvent)
	void SetItemIsSelected(int32 index, bool isSelected);

public:
	UFUNCTION(BlueprintCallable)
	void SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle);

protected:
	UFUNCTION()
	void HandleItemClicked(FName itemID);

public:
	UUMGLoadoutPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutPageScrollWidget) { return 0; }
