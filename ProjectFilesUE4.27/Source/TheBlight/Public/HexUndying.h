#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HexPerk.h"
#include "GameEventData.h"
#include "HexUndying.generated.h"

class ACamperPlayer;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexUndying : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _revealAuraDistanceFromTotem;

private:
	UFUNCTION()
	void Authority_UpdateHexPerkStatusView(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);

	UFUNCTION()
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

	UFUNCTION()
	void Authority_OnCamperCleansedHexPerk(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UHexUndying();
};

FORCEINLINE uint32 GetTypeHash(const UHexUndying) { return 0; }
