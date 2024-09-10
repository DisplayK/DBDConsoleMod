#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexHuntressLullabyPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexHuntressLullabyPerk : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _huntressLullabyEffectID;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _huntressLullabyStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _possiblePlayerStateTagsInProgress;

public:
	UHexHuntressLullabyPerk();
};

FORCEINLINE uint32 GetTypeHash(const UHexHuntressLullabyPerk) { return 0; }
