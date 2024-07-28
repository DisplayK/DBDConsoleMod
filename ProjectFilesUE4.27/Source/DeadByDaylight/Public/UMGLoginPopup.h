#pragma once

#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGLoginPopup.generated.h"

class UUMGAuthentificationProviderListWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoginPopup : public UUMGGenericPopup
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAuthentificationProviderListWidget* AuthenticationProviderList;

public:
	UFUNCTION(BlueprintCallable)
	void ChooseProvider(const uint8 provider);

public:
	UUMGLoginPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoginPopup) { return 0; }
