#pragma once

#include "CoreMinimal.h"
#include "AddonViewData.h"
#include "ExternalEffectsViewInterface.h"
#include "PerkViewData.h"
#include "UObject/ScriptInterface.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CoreBaseHudWidget.h"
#include "Engine/EngineTypes.h"
#include "CoreExternalEffectsWidget.generated.h"

class UCorePerkWidget;
class UCoreAddonWidget;
class UGridPanel;
class USpacer;
class IPerkViewInterface;
class IAddonViewInterface;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExternalEffectsWidget : public UCoreBaseHudWidget, public IExternalEffectsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FVector2D GridSlotSize;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float AddonScaleRatio;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 SpacingBetweenRows;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 SpacingPerks;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 SpacingAddons;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 SpacingBetweenPerksAndAddons;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCorePerkWidget> PerkWidgetClass;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreAddonWidget> AddonWidgetClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* Container;

private:
	UPROPERTY(Transient)
	TArray<FPerkViewData> _perkData;

	UPROPERTY(Transient, Export)
	TMap<FName, UCorePerkWidget*> _perkWidgets;

	UPROPERTY(Transient, Export)
	TArray<UCorePerkWidget*> _perkPool;

	UPROPERTY(Transient)
	TMap<FName, TScriptInterface<IPerkViewInterface>> _perkViewInterfaces;

	UPROPERTY(Transient)
	TArray<FAddonViewData> _addonData;

	UPROPERTY(Transient, Export)
	TMap<FName, UCoreAddonWidget*> _addonWidgets;

	UPROPERTY(Transient, Export)
	TArray<UCoreAddonWidget*> _addonPool;

	UPROPERTY(Transient)
	TMap<FName, TScriptInterface<IAddonViewInterface>> _addonViewInterfaces;

	UPROPERTY(Transient)
	TMap<FName, FTimerHandle> _timerHandleMap;

	UPROPERTY(Transient, Export)
	TMap<FName, USpacer*> _spacerWidgets;

	UPROPERTY(Transient, Export)
	TArray<USpacer*> _spacerPool;

public:
	UFUNCTION()
	void HideExternalPerk_Implementation(const FName& itemId);

	UFUNCTION()
	void HideExternalAddon_Implementation(const FName& itemId);

public:
	UCoreExternalEffectsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreExternalEffectsWidget) { return 0; }
