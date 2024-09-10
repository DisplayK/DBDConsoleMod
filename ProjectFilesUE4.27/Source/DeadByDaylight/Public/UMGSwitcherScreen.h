#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutWidgetSlotClickedEvent.h"
#include "OnLoadoutWidgetInventoryItemUnselectedEvent.h"
#include "OnLoadoutWidgetInventoryItemSelectedEvent.h"
#include "UMGSwitcherScreen.generated.h"

class UUMGCharacterSelectionWidget;
class UUMGLoadoutWidget;
class UWidgetSwitcher;
class UUMGBloodStoreWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGSwitcherScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnLoadoutWidgetSlotClickedEvent OnLoadoutWidgetSlotClicked;

	UPROPERTY(BlueprintAssignable)
	FOnLoadoutWidgetInventoryItemSelectedEvent OnLoadoutWidgetInventoryItemSelected;

	UPROPERTY(BlueprintAssignable)
	FOnLoadoutWidgetInventoryItemUnselectedEvent OnLoadoutWidgetInventoryItemUnselected;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* ContainerWidgetSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreWidget* BloodStoreWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGLoadoutWidget* LoadoutWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCharacterSelectionWidget* CharacterSelectionWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastSlotClickedEvent(int32 loadoutSlot);

	UFUNCTION(BlueprintCallable)
	void BroadcastItemUnSelectedEvent(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastItemSelectedEvent(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterSelectedEvent(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterRoleButtonClickedEvent();

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterInfoButtonClickedEvent();

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodStoreRegenerate(int32 characterId);

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodeSelected(int32 characterId, int32 nodeId, int32 nodeDepth);

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodePurchase(int32 characterId);

public:
	UUMGSwitcherScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSwitcherScreen) { return 0; }
