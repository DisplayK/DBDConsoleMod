#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterSelectSubmenu.generated.h"

UCLASS(EditInlineNew)
class UUMGCharacterSelectSubmenu : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetInInfoPanelMode(bool isInInfoPanel);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCurrentRole(bool isKiller);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastRoleButtonClicked();

	UFUNCTION(BlueprintCallable)
	void BroadcastInfoButtonClicked();

public:
	UUMGCharacterSelectSubmenu();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSelectSubmenu) { return 0; }
