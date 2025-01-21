#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBloodStoreTimer.generated.h"

class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreTimer : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor _normalColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor _warningColor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RemainingTimeTextBlock;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* RefreshImage;

public:
	UUMGBloodStoreTimer();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreTimer) { return 0; }
