#pragma once

#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UMGBasePassStorefrontWidget.generated.h"

class UUMGSubscriptionsPageScrollWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBasePassStorefrontWidget : public UUMGBaseStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSubscriptionsPageScrollWidget* SubscriptionsPageScroll;

private:
	UFUNCTION()
	void HandleSubscriptionInfoButtonClickedEvent(const FString& subscriptionDetails);

	UFUNCTION()
	void HandleBuySubscriptionPackButtonClickedEvent(FName subscriptionPackID);

public:
	UUMGBasePassStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBasePassStorefrontWidget) { return 0; }
