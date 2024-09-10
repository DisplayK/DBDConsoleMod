#pragma once

#include "CoreMinimal.h"
#include "TutorialHighlightViewInterface.h"
#include "InteractionPromptsContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "CoreInteractionPromptsContainerWidget.generated.h"

class UCoreInteractionPromptWidget;
class UDBDWrapBox;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget, public IInteractionPromptsContainerViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDWrapBox* CenterContainerBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDWrapBox* ContainerBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UCoreInteractionPromptWidget> InteractionPromptWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 MaxDisplayedPrompts;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 MaxDisplayedCenterPrompts;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FMargin SlotMargin;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreInteractionPromptWidget*> _promptWidgetPool;

	UPROPERTY(Transient, Export)
	TArray<UCoreInteractionPromptWidget*> _centerPromptWidgetPool;

	UPROPERTY(Transient, Export)
	TMap<FName, UCoreInteractionPromptWidget*> _displayedPromptsMap;

public:
	UCoreInteractionPromptsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionPromptsContainerWidget) { return 0; }
