#pragma once

#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "GeneratorIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UGeneratorIndicatorWidget : public UBaseIndicatorWidget
{
	GENERATED_BODY()

public:
	UGeneratorIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorIndicatorWidget) { return 0; }
