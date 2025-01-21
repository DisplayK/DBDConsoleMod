#pragma once

#include "CoreMinimal.h"
#include "EPerkInteractionObjectType.h"
#include "Perk.h"
#include "Hoarder.generated.h"

class ASearchable;
class AActor;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoarder : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ASearchable*> _chests;

	UPROPERTY(EditDefaultsOnly)
	float _camperInteractItemPickupRevealRange;

	UPROPERTY(EditDefaultsOnly)
	int32 _extraChestsSpawned;

	UPROPERTY(EditDefaultsOnly)
	float _bubbleIndicatorLifetime;

	UPROPERTY(EditDefaultsOnly)
	bool _showUniqueChestVisualPerState;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Local_ThrowBubbleIndicator(const EPerkInteractionObjectType camperInteractionType, const AActor* objectActor, const ACamperPlayer* interactingCamperPlayer);

	UFUNCTION(BlueprintPure)
	float GetBubbleIndicatorLifetime() const;

public:
	UHoarder();
};

FORCEINLINE uint32 GetTypeHash(const UHoarder) { return 0; }
