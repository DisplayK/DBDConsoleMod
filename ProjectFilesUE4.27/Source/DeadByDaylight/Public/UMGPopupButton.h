#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPopupButton.generated.h"

class UImage;

UCLASS(EditInlineNew)
class UUMGPopupButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float DisabledOpacity;

	UPROPERTY(EditDefaultsOnly)
	float EnabledOpacity;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* VFXs;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Line;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* FXSmoke;

public:
	UFUNCTION()
	void OnButtonReleased();

	UFUNCTION()
	void OnButtonPressed();

	UFUNCTION()
	void OnButtonClicked();

public:
	UUMGPopupButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPopupButton) { return 0; }
