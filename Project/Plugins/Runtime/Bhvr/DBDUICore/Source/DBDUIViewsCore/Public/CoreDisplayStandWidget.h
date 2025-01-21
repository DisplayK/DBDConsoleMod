#pragma once

#include "CoreMinimal.h"
#include "DisplayStandViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "DisplayStandRotationEvent.h"
#include "UObject/NoExportTypes.h"
#include "CoreDisplayStandWidget.generated.h"

class UDragZone;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreDisplayStandWidget : public UCoreBaseUserWidget, public IDisplayStandViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FDisplayStandRotationEvent _displayStandRotationDelegate;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDragZone* DragZone;

protected:
	UFUNCTION()
	void OnDrag(FVector2D cursorDelta);

public:
	UCoreDisplayStandWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreDisplayStandWidget) { return 0; }
