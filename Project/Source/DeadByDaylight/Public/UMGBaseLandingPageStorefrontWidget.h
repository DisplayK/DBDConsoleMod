#pragma once

#include "CoreMinimal.h"
#include "EStorefrontState.h"
#include "UMGBaseStorefrontWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseLandingPageStorefrontWidget.generated.h"

class UHorizontalBox;
class UVerticalBox;
class UUMGLandingPageButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGBaseLandingPageStorefrontWidget : public UUMGBaseStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* BigButtonsSlot;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* SmallButtonsSlot1;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* SmallButtonsSlot2;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGLandingPageButtonWidget> SmallButtonClass;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGLandingPageButtonWidget> MediumButtonClass;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGLandingPageButtonWidget> BigButtonClass;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor DisabledButtonColor;

	UPROPERTY(EditDefaultsOnly)
	FText DisabledButtonText;

private:
	UPROPERTY(Export)
	TArray<UUMGLandingPageButtonWidget*> _landingPageTabs;

private:
	UFUNCTION()
	void HandleTabSelected(const EStorefrontState& tabId);

public:
	UUMGBaseLandingPageStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseLandingPageStorefrontWidget) { return 0; }
