#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAuthentificationProviderListWidget.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAuthentificationProviderListWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* GuestButtonContainer;

public:
	UFUNCTION(BlueprintCallable)
	void HideGuestButton();

public:
	UUMGAuthentificationProviderListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAuthentificationProviderListWidget) { return 0; }
