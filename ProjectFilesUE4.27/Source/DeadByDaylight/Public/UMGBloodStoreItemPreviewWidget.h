#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreItemPreviewWidget.generated.h"

UCLASS(EditInlineNew)
class UUMGBloodStoreItemPreviewWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FText _itemName;

	UPROPERTY(BlueprintReadOnly)
	FText _itemDescription;

	UPROPERTY(BlueprintReadOnly)
	int32 _itemPrice;

	UPROPERTY(BlueprintReadOnly)
	FText _refreshPrice;

	UPROPERTY(BlueprintReadOnly)
	FText _nodeStatusText;

	UPROPERTY(BlueprintReadOnly)
	FText _refreshTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _itemSelectionTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _itemSelectionText;

	UPROPERTY(BlueprintReadOnly)
	FText _purchaseTitle;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UnselectItem();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ShowRefreshButton(bool showRefreshButton, bool isRefreshFree);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowPurchaseButton(bool showPurchaseButton);

	UFUNCTION(BlueprintImplementableEvent)
	void DisplayItem(bool isItemPurchaseable, bool isItemAffordable);

	UFUNCTION(BlueprintCallable)
	void BroadcastUnselectPressed();

	UFUNCTION(BlueprintCallable)
	void BroadcastRefreshPressed();

	UFUNCTION(BlueprintCallable)
	void BroadcastPurchasePressed();

public:
	UUMGBloodStoreItemPreviewWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreItemPreviewWidget) { return 0; }
