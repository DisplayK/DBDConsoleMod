#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGExpandableListWidget.generated.h"

class UUserWidget;
class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;
class UExpandableArea;

UCLASS(Abstract, EditInlineNew)
class UUMGExpandableListWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool ShouldHideExpandableListIfEmpty;

	UPROPERTY(EditInstanceOnly)
	bool IsExtendedAtStart;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* ExpansionButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* ItemContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CategorieName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemCount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UExpandableArea* ExpandableArea;

	UPROPERTY(EditInstanceOnly)
	FText HeaderTitle;

private:
	UPROPERTY(Export)
	TArray<UUserWidget*> _childWidgets;

protected:
	UFUNCTION()
	void ToggleExpansion();

public:
	UUMGExpandableListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGExpandableListWidget) { return 0; }
