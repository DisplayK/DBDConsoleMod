#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ArchiveNodeObjectiveViewData.h"
#include "CoreArchiveObjectiveWidget.generated.h"

class UDBDRichTextBlock;
class UDBDImage;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveObjectiveWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ObjectiveDescriptionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* CurrentProgressTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* MaxProgressTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FArchiveNodeObjectiveViewData& objectiveData);

public:
	UCoreArchiveObjectiveWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveObjectiveWidget) { return 0; }
