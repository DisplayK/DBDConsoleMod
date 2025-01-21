#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "LoadoutMenuPopupViewInterface.h"
#include "OnLoadoutMenuInventorySlotClick.h"
#include "CoreGenericPopupWidget.h"
#include "OnLoadoutMenuRightArrowClick.h"
#include "OnLoadoutMenuSlotClick.h"
#include "OnLoadoutMenuLeftArrowClick.h"
#include "LoadoutMenuSlotIsSelected.h"
#include "OnLoadoutMenuPresetSlotClick.h"
#include "OnSelectedCharacterChanged.h"
#include "Templates/SubclassOf.h"
#include "ETooltipHorizontalAlignment.h"
#include "TabWidgetData.h"
#include "ELoadoutSlot.h"
#include "LoadoutMenuPopupWidget.generated.h"

class UDBDDropDownListWidget;
class UDBDDropDownListButton;
class UCoreMenuItemWidget;
class UCoreMenuPowerWidget;
class UCorePaginationContainerWidget;
class UCoreMenuAddonWidget;
class UCoreMenuOfferingWidget;
class UCoreMenuPerkWidget;
class UCorePresetWidget;
class UGridPanel;
class UCoreMenuLoadoutPartWidget;
class UMenuLoadoutPartViewData;
class ULoadoutMenuPopupViewData;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutMenuPopupWidget : public UCoreGenericPopupWidget, public ILoadoutMenuPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListWidget* DropDownListWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListButton* DropDownListTrigger;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPowerWidget* CoreMenuPower;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuItemWidget* CoreMenuItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuOfferingWidget* CoreOffering;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_3;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_4;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePresetWidget* Preset_1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePresetWidget* Preset_2;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePresetWidget* Preset_3;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCorePresetWidget* Preset_4;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* InventoryGridContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePaginationContainerWidget* PaginationGridContainer;

	UPROPERTY()
	FOnLoadoutMenuRightArrowClick _onLoadoutMenuRightArrowClickedDelegate;

	UPROPERTY()
	FOnLoadoutMenuLeftArrowClick _onLoadoutMenuLeftArrowClickedDelegate;

	UPROPERTY()
	FOnLoadoutMenuSlotClick _onLoadoutMenuSlotClickedDelegate;

	UPROPERTY()
	FLoadoutMenuSlotIsSelected _onLoadoutMenuSlotSelectedDelegate;

	UPROPERTY()
	FOnLoadoutMenuInventorySlotClick _onLoadoutMenuInventorySlotClickedDelegate;

	UPROPERTY()
	FOnLoadoutMenuPresetSlotClick _onLoadoutMenuPresetSlotClickedDelegate;

	UPROPERTY()
	FOnSelectedCharacterChanged _onSelectedCharacterChangedDelegate;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuPowerWidget> _loadoutPowerClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuItemWidget> _loadoutItemWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuAddonWidget> _loadoutAddonClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuOfferingWidget> _loadoutOfferingClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreMenuPerkWidget> _loadoutPerkClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCorePaginationContainerWidget> _paginationWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerColumn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _cellsPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreMenuLoadoutPartWidget*> _inventoryItemWidgetList;

	UPROPERTY(Transient, Export)
	TArray<UCoreMenuPerkWidget*> _perkSlotWidget;

	UPROPERTY(Transient, Export)
	TArray<UCoreMenuAddonWidget*> _addonSlotWidget;

	UPROPERTY(Transient, Export)
	TArray<UCorePresetWidget*> _presetWidgets;

	UPROPERTY(Transient)
	UMenuLoadoutPartViewData* _menuLoadoutPartViewData;

	UPROPERTY(Transient)
	ELoadoutSlot _loadoutSlot;

	UPROPERTY(Transient)
	ULoadoutMenuPopupViewData* _loadoutMenuPopupViewData;

	UPROPERTY(Transient)
	int32 _numberOfPaginationItem;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuPopupViewData*> _perkData;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuPopupViewData*> _addonLoadoutData;

	UPROPERTY(Transient)
	TArray<ULoadoutMenuPopupViewData*> _inventoryViewData;

private:
	UFUNCTION()
	void UpdateInventoryItemData(const int32 currentPage);

	UFUNCTION(BlueprintCallable)
	void ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPresetClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget);

	UFUNCTION()
	void OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData);

	UFUNCTION(BlueprintCallable)
	void HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	ULoadoutMenuPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuPopupWidget) { return 0; }
