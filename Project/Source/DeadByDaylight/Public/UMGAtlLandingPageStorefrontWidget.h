#pragma once

#include "CoreMinimal.h"
#include "UMGBaseLandingPageStorefrontWidget.h"
#include "UMGAtlLandingPageStorefrontWidget.generated.h"

class UUMGBaseButtonWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlLandingPageStorefrontWidget : public UUMGBaseLandingPageStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* AtlantaRedeemCodeBtn;

protected:
	UFUNCTION()
	void OnPromoCodeButtonPressed();

public:
	UUMGAtlLandingPageStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlLandingPageStorefrontWidget) { return 0; }
