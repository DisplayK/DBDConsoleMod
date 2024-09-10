#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlEndDateTimerWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlEndDateTimerWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UTextBlock* TextEndIn;

public:
	UUMGAtlEndDateTimerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlEndDateTimerWidget) { return 0; }
