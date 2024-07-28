#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TricksterCharacterVFXInterface.generated.h"

UINTERFACE(Blueprintable)
class THEK23_API UTricksterCharacterVFXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEK23_API ITricksterCharacterVFXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowWeapon();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetSuperModeActive(bool active);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetKnivesVisibility(bool leftKnife, bool rightKnife);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetIsSuperModeReady(bool isSuperModeReady);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetIsInCooldown(bool isInCooldown);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void HideWeapon();

};
