#pragma once

#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "ExitOpenedIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UExitOpenedIndicatorWidget : public UBaseIndicatorWidget
{
	GENERATED_BODY()

public:
	UExitOpenedIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UExitOpenedIndicatorWidget) { return 0; }
