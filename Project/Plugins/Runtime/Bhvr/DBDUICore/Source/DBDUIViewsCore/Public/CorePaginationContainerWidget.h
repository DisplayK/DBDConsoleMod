#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "CorePaginationContainerWidget.generated.h"

class UCoreSelectableButtonWidget;
class UDBDTextBlock;
class UGridPanel;

UCLASS(EditInlineNew)
class UCorePaginationContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedPageDelegate, int32, selectedPage);

public:
	UPROPERTY(BlueprintAssignable)
	FOnSelectedPageDelegate OnSelectedPageDelegate;

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreSelectableButtonWidget> PaginationWidgetClass;

	UPROPERTY(EditAnywhere, NoClear)
	int32 MaxNumberOfPages;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* PaginationContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* FirstPage;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* FirstEllipsis;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* LastEllipsis;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSelectableButtonWidget* LastPage;

private:
	UPROPERTY(EditInstanceOnly, NoClear)
	FMargin _widgetPadding;

	UPROPERTY(Transient, Export)
	TArray<UCoreSelectableButtonWidget*> _paginationWidgetList;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSelectedWidget(int32 currentIndex);

	UFUNCTION(BlueprintCallable)
	void UpdatePaginationWidget(int32 numberOfPages);

private:
	UFUNCTION()
	void OnPaginationSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable)
	int32 GetCurrentPage();

public:
	UCorePaginationContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePaginationContainerWidget) { return 0; }
