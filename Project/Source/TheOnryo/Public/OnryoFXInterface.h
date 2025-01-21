#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnryoFXInterface.generated.h"

UINTERFACE(Blueprintable)
class THEONRYO_API UOnryoFXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEONRYO_API IOnryoFXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportSuccess();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportFinished();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnManifestStateChanged(bool isManifested, const bool isImmediateManifest);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerVisibilityChanged(bool isVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeUnmanifestSuccess();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeUnmanifestStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeUnmanifestCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeManifestSuccess();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeManifestStart();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeManifestCancelled();

};
