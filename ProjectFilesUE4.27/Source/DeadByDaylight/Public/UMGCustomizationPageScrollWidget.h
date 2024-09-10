#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGGridPageScrollWidget.h"
#include "StoreItemSlotData.h"
#include "UMGCustomizationPageScrollWidget.generated.h"

class UUMGCustomizationItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationPageScrollWidget : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGCustomizationItemWidget> _customizationItemWidgetClass;

	UPROPERTY(Transient)
	TArray<FStoreItemSlotData> _availableItemsData;

	UPROPERTY(Transient, Export)
	TArray<UUMGCustomizationItemWidget*> _itemWidgets;

private:
	UFUNCTION()
	void OnAvailableItemSelectedCallback(int32 itemIndex);

public:
	UUMGCustomizationPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationPageScrollWidget) { return 0; }
