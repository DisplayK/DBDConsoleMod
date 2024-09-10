#pragma once

#include "CoreMinimal.h"
#include "UMGPageScrollWidget.h"
#include "UMGGridPageScrollWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGGridPageScrollWidget : public UUMGPageScrollWidget
{
	GENERATED_BODY()

public:
	UUMGGridPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGGridPageScrollWidget) { return 0; }
