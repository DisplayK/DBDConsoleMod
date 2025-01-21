#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "MotherDaughterRing.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMotherDaughterRing : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hideFootstepsEffect;

public:
	UMotherDaughterRing();
};

FORCEINLINE uint32 GetTypeHash(const UMotherDaughterRing) { return 0; }
