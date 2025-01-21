#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGObjectivesWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGObjectivesWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility PanelEscapeRequirementsVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility PanelGeneratorVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility PanelFindExitVisibility;

	UPROPERTY(BlueprintReadOnly, Transient)
	ESlateVisibility PanelHatchVisibility;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateTextMessage(const FText& textFind, const FText& textExit, const FText& textOr);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateGeneratorCount(int32 count);

public:
	UUMGObjectivesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGObjectivesWidget) { return 0; }
