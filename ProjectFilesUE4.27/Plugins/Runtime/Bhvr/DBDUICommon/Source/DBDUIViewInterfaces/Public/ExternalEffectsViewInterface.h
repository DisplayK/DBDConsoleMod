#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AddonViewData.h"
#include "PerkViewData.h"
#include "ExternalEffectsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UExternalEffectsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IExternalEffectsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowExternalPerk(const FPerkViewData& perkViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowExternalAddon(const FAddonViewData& addonViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HideExternalPerk(const FName& itemId);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HideExternalAddon(const FName& itemId);

};
