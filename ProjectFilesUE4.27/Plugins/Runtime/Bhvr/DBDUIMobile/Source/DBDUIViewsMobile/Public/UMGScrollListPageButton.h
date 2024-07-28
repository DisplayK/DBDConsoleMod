#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnScrollListPageButtonClicked.h"
#include "UMGScrollListPageButton.generated.h"

class UButton;
class UImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGScrollListPageButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnScrollListPageButtonClicked OnClicked;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 PageIndex;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* ActionButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* SelectedImage;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool selected);

	UFUNCTION()
	void HandleActionButtonClick();

public:
	UUMGScrollListPageButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGScrollListPageButton) { return 0; }
