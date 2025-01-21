#pragma once

#include "CoreMinimal.h"
#include "ETallyListPageID.h"
#include "UMGPageScrollWidget.h"
#include "EPlayerRole.h"
#include "UMGTallyListWidget.generated.h"

class UCanvasPanel;
class UUMGTallyListElementWidget;

UCLASS(EditInlineNew)
class UUMGTallyListWidget : public UUMGPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	FText TopLeftText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText TopRightText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ListBGPanel;

private:
	UPROPERTY(Transient)
	EPlayerRole _playerRole;

	UPROPERTY(Transient)
	TSet<int32> _inAnimationPlayedPages;

	UPROPERTY(Transient, Export)
	TMap<ETallyListPageID, UUMGTallyListElementWidget*> _listItemWidgets;

public:
	UUMGTallyListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyListWidget) { return 0; }
