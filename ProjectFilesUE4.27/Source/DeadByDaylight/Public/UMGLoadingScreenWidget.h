#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGLoadingScreenWidget.generated.h"

class UTextBlock;
class UImage;
class UProgressBar;
class UPanelWidget;

UCLASS(EditInlineNew)
class UUMGLoadingScreenWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Description;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HintIcon;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* LoadingBar;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* KillerPanel;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* SurvivorPanel;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Title;

public:
	UUMGLoadingScreenWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadingScreenWidget) { return 0; }
