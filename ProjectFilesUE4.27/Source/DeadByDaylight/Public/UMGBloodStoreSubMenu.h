#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreSubMenu.generated.h"

class UUMGBloodStoreTimer;

UCLASS(Abstract, EditInlineNew)
class UUMGBloodStoreSubMenu : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreTimer* SurvivorTimer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreTimer* KillerTimer;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetFaction(bool isKiller);

	UFUNCTION()
	void BroadcastExpiredBloodWeb();

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterRoleButtonClicked();

public:
	UUMGBloodStoreSubMenu();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreSubMenu) { return 0; }
