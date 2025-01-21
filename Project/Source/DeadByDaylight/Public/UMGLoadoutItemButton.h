#pragma once

#include "CoreMinimal.h"
#include "EInventoryButtonState.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "OnLoadoutItemButtonClickedEvent.h"
#include "Components/SlateWrapperTypes.h"
#include "InventorySlotData.h"
#include "EItemRarity.h"
#include "EStatusEffectType.h"
#include "UMGLoadoutItemButton.generated.h"

class UTextBlock;
class UButton;
class UCanvasPanel;
class UImage;
class UVerticalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutItemButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnLoadoutItemButtonClickedEvent OnLoadoutItemButtonClicked;

	UPROPERTY(BlueprintAssignable)
	FOnLoadoutItemButtonClickedEvent OnDisabledItemButtonClicked;

	UPROPERTY(BlueprintAssignable)
	FOnLoadoutItemButtonLongPressEvent OnLoadoutItemButtonLongPress;

	UPROPERTY(BlueprintReadWrite)
	bool HideStackCount;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextStackCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* EmptyCanvas;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* EmptyButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* LockedButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ActionCanvas;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImageRarityBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImageGradient;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImagePaint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImageEventBorder;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImagePaintTop;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImagePaintBottom;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility EmptyCanvasVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility ActionCanvasVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility PrivateCanvasVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility LockIconVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility EmptyIconVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility SpecialEventVisiblity;

	UPROPERTY(BlueprintReadWrite, Transient)
	ESlateVisibility LoadoutSelectedVisibility;

	UPROPERTY(BlueprintReadWrite, Transient)
	ESlateVisibility LoadoutLockVisibility;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImageIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImageShadow;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* ActionButton;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush EmptyBGAsset;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush DisableBGAsset;

	UPROPERTY(BlueprintReadWrite, Transient)
	FInventorySlotData LoadoutItemData;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _triggerClickEventForLoadoutWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* CanvasUnlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextUnlockLevel;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateWidgetByState(EInventoryButtonState state);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidgetByDataBP(const FInventorySlotData& slotData);

	UFUNCTION(BlueprintCallable)
	void UpdateWidgetByData(const FInventorySlotData& slotData);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateUnlockable(const FString& nameToDisplay, int32 unlockableLevel);

	UFUNCTION(BlueprintCallable)
	void UpdateStackCount(int32 stackCount);

	UFUNCTION(BlueprintCallable)
	void UpdateImageColor(EItemRarity rarity, EStatusEffectType effectType);

public:
	UFUNCTION(BlueprintCallable)
	void ShowClickableOutline(bool clickable);

	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable)
	void SetIconImageByPath(const FString& iconPath);

private:
	UFUNCTION(BlueprintCallable)
	void OnLockedButtonClicked();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializationForLoadoutWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializationForCharacterInfoWidget();

	UFUNCTION(BlueprintCallable)
	FName GetLoadoutItemID();

	UFUNCTION(BlueprintCallable)
	void BroadcastLongPressEvent(FName itemID);

	UFUNCTION(BlueprintCallable)
	void BroadcastClickedEvent(FName itemID);

public:
	UUMGLoadoutItemButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutItemButton) { return 0; }
