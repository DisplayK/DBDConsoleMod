#pragma once

#include "CoreMinimal.h"
#include "SubtitlesViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreSubtitlesWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSubtitlesWidget : public UCoreBaseUserWidget, public ISubtitlesViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitlesTB;

public:
	UCoreSubtitlesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSubtitlesWidget) { return 0; }
