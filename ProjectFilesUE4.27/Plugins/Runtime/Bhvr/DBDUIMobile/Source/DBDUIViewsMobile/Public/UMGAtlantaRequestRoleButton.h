#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaRequestRoleButton.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaRequestRoleButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UWidgetSwitcher* IconSwitcher;

protected:
	UFUNCTION(BlueprintCallable)
	void SetIsActive(bool isActive);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnToggleActiveState(bool isActive);

	UFUNCTION(BlueprintPure)
	bool GetIsActive() const;

public:
	UUMGAtlantaRequestRoleButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRequestRoleButton) { return 0; }
