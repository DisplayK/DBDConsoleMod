#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "HopePerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHopePerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hopePerkEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffect;

public:
	UHopePerk();
};

FORCEINLINE uint32 GetTypeHash(const UHopePerk) { return 0; }
