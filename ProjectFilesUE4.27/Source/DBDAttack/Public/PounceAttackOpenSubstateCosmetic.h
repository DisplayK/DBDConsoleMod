#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PounceAttackOpenSubstateCosmetic.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UPounceAttackOpenSubstateCosmetic : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackStartCosmetic(ADBDPlayer* slasherPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackEndCosmetic(ADBDPlayer* slasherPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChangedCosmetic(ADBDPlayer* slasherPlayer);

private:
	UFUNCTION()
	void OnLocallyObservedChanged(ADBDPlayer* slasherPlayer);

public:
	UFUNCTION(BlueprintPure)
	bool IsLungeAttackAugmented(ADBDPlayer* slasherPlayer) const;

public:
	UPounceAttackOpenSubstateCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstateCosmetic) { return 0; }
