#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPageScrollWidget.generated.h"

class UUMGScrollListPageButton;
class UHorizontalBox;
class UAkAudioEvent;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGPageScrollWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RowCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ColumnCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemGapDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalPageCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ButtonWidth;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnPageChangeSound;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ContainerPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* ButtonsPanel;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGScrollListPageButton> _pageButtonWidgetClass;

	UPROPERTY(Transient, Export)
	TArray<UCanvasPanel*> _itemArray;

	UPROPERTY(BlueprintReadOnly)
	int32 _currentPageIndex;

	UPROPERTY(Transient, Export)
	TArray<UMobileBaseUserWidget*> _activeWidgets;

public:
	UFUNCTION()
	void HandlePageButtonClicked(int32 pageIndex);

public:
	UUMGPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPageScrollWidget) { return 0; }
