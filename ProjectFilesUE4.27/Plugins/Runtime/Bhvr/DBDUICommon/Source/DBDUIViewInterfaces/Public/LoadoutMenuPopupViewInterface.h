#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELoadoutSlot.h"
#include "TabWidgetData.h"
#include "LoadoutMenuPopupViewInterface.generated.h"

class ULoadoutMenuPopupViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULoadoutMenuPopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILoadoutMenuPopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdatePresetData(const TArray<int32>& presetData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectedInventoryItem(const TArray<int32>& selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectableCharacters(const TArray<FTabWidgetData>& selectableCharacters, const FTabWidgetData selectedCharacterData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadoutMenuSlotData(const TArray<ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadoutMenuInventoryData(const TArray<ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected);

};
