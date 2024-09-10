#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "PerkHudWidget.generated.h"

class UPerkActionButton;
class UCanvasPanel;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UPerkHudWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* PerksClickable;

	UPROPERTY(BlueprintReadOnly, Export)
	UCanvasPanel* PerksExternal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UPerkActionButton> AtlantaPerkActionButtonClass;

private:
	UPROPERTY(Transient, Export)
	TMap<FName, UPerkActionButton*> _clickablePerksMap;

	UPROPERTY(Transient, Export)
	TMap<FName, UPerkActionButton*> _externalPerksMap;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveExistingPerk(FName perkID, bool isExternal);

	UFUNCTION(BlueprintImplementableEvent)
	void OnPerkClickedHandler(FName perkID);

public:
	UPerkHudWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkHudWidget) { return 0; }
