#pragma once

#include "CoreMinimal.h"
#include "OnBloodNodePurchaseEvent.h"
#include "MobileBaseUserWidget.h"
#include "OnBloodStoreRegenerateEvent.h"
#include "OnBloodNodeSelectedEvent.h"
#include "OnCharacterRoleButtonClickedEvent.h"
#include "UMGBloodStoreWidget.generated.h"

class UUMGBloodStoreSubMenu;
class UUMGBloodStoreArrayWidget;
class UUMGBloodStoreItemPreviewWidget;

UCLASS(EditInlineNew)
class UUMGBloodStoreWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnBloodNodeSelectedEvent OnBloodNodeSelected;

	UPROPERTY(BlueprintAssignable)
	FOnBloodNodePurchaseEvent OnBloodNodePurchase;

	UPROPERTY(BlueprintAssignable)
	FOnBloodStoreRegenerateEvent OnBloodStoreRegenerate;

	UPROPERTY(BlueprintAssignable)
	FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreArrayWidget* BloodStoreArrayWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreItemPreviewWidget* ItemPreviewWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreSubMenu* BloodStoreSubMenuWidget;

	UPROPERTY(BlueprintReadOnly)
	FText _bloodStoreTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _killersTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _survivorsTitle;

private:
	UFUNCTION()
	void UnselectNode();

	UFUNCTION()
	void SwitchRole();

	UFUNCTION()
	void SetSelectedNode(const FString& selectedId);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetFaction(bool isKiller);

private:
	UFUNCTION()
	void RegenerateBloodStore();

	UFUNCTION()
	void PurchaseSelectedNode();

public:
	UUMGBloodStoreWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreWidget) { return 0; }
