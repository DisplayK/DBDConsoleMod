#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "DanceWithMePerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDanceWithMePerk : public UPerk
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnPerkActivate(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UDanceWithMePerk();
};

FORCEINLINE uint32 GetTypeHash(const UDanceWithMePerk) { return 0; }
