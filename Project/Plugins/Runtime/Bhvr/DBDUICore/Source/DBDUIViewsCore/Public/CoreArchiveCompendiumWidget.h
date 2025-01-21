#pragma once

#include "CoreMinimal.h"
#include "OnCompendiumClickedDelegate.h"
#include "ArchiveCompendiumViewInterface.h"
#include "CoreTabContentWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreArchiveCompendiumWidget.generated.h"

class UCoreArchiveCompendiumButtonWidget;
class UGridPanel;
class UGridSlot;
class UDBDScrollBox;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveCompendiumWidget : public UCoreTabContentWidget, public IArchiveCompendiumViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCoreArchiveCompendiumButtonWidget> _compendiumButtonWidgetClass;

	UPROPERTY()
	FOnCompendiumClickedDelegate _onCompendiumClickedDelegate;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* CompendiumGrid;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* CompendiumScroll;

	UPROPERTY()
	int32 _cellsPerRow;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetPool;

	UPROPERTY(Transient, Export)
	TArray<UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetList;

private:
	UFUNCTION()
	void SetGridSlot(UGridSlot* gridSlot, int32 index);

public:
	UFUNCTION(BlueprintCallable)
	void ResetScroll();

private:
	UFUNCTION()
	void Reset();

protected:
	UFUNCTION()
	void OnPastStoryClicked(UCoreButtonWidget* button);

private:
	UFUNCTION()
	void CreateGhostStories(const int32 currentStoryNum);

	UFUNCTION()
	UCoreArchiveCompendiumButtonWidget* CreateAndAddButtonToGrid(int32 index);

public:
	UCoreArchiveCompendiumWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveCompendiumWidget) { return 0; }
