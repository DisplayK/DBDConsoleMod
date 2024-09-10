#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBaseCountdownWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCountdownWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* TimerTextBlock;

	UPROPERTY(EditDefaultsOnly)
	int32 _timerThreshold;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor _timerColorBelowThreshold;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor _timerColorBeyondThreshold;

public:
	UUMGBaseCountdownWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseCountdownWidget) { return 0; }
