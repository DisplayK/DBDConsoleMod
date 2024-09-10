#pragma once

#include "CoreMinimal.h"
#include "CoreTabContentWidget.h"
#include "Templates/SubclassOf.h"
#include "ArchiveTomeMenuTabSelectedDelegate.h"
#include "ArchiveTomeViewInterface.h"
#include "ArchiveTomeEditorSwitchCompleteDelegate.h"
#include "CoreArchiveTomeWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreArchiveQuestEditorWidget;
class UWidgetSwitcher;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveTomeWidget : public UCoreTabContentWidget, public IArchiveTomeViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestEditorWidget> _archiveQuestEditorWidgetClass;

	UPROPERTY(BlueprintReadOnly, Export)
	UCoreArchiveQuestEditorWidget* _archiveQuestEditorWidget;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreTabContainerWidget* ArchiveTomeSideNav;

	UPROPERTY(BlueprintReadWrite, Export)
	UWidgetSwitcher* EditorSwitcher;

protected:
	UPROPERTY()
	FArchiveTomeMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY()
	FArchiveTomeEditorSwitchCompleteDelegate _editorSwitchCompleteDelegate;

protected:
	UFUNCTION()
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreArchiveTomeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveTomeWidget) { return 0; }
