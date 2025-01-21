#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSettingMenuButton.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGSettingMenuButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTabButtonText(const FText& buttonText);

	UFUNCTION(BlueprintImplementableEvent)
	void SetIsSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSettingTabButtonClick();

public:
	UUMGSettingMenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingMenuButton) { return 0; }
