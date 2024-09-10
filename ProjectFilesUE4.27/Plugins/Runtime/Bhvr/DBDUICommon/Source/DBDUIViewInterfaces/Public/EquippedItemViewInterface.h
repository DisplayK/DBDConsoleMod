#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/SoftObjectPtr.h"
#include "ItemBundleViewData.h"
#include "EquippedItemViewInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEquippedItemViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEquippedItemViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetFakeItem(bool isHoldingFakeItem, const TSoftObjectPtr<UTexture2D>& fakeItemIcon);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FItemBundleViewData& itemBundleData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetActiveState(bool isActive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearData(bool fullClear);

};
