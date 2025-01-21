#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCustomizationInfoWidget.generated.h"

class UTexture2D;
class UImage;
class URichTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Icon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Background;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* InformationText;

	UPROPERTY(EditAnywhere)
	FSlateColor BackgroundColor;

	UPROPERTY(EditAnywhere)
	FSlateColor TextColor;

	UPROPERTY(EditAnywhere)
	FSlateColor IconColor;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> DefaultIcon;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftObjectPtr<UTexture2D> KillerIcon;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftObjectPtr<UTexture2D> SurvivorIcon;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftObjectPtr<UTexture2D> BreakableIcon;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftObjectPtr<UTexture2D> UnbreakableIcon;

public:
	UUMGCustomizationInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationInfoWidget) { return 0; }
