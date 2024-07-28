#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "K28FXInterface.generated.h"

UINTERFACE(Blueprintable)
class THEK28_API UK28FXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEK28_API IK28FXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeOut();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeIn();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetBlackMaterialOnKiller(bool blackMaterialApplied);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCooldownEnded();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportationToLockerStart(float teleportationDuration, bool isKillerAlreadyHidingInLocker);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnShowKiller(bool isInstantShow);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLockerTeleportTargetHighlighted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnterLocker();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsKillingSurvivorWithMoriStateChanged(bool isKillingSurvivorWithMori);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHideKiller();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeTeleportStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeTeleportComplete();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeTeleportCancelled();

};
