#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TormentMode_18.generated.h"

class UHemorrhageStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_18 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UHemorrhageStatusEffect> _hemorrhageEffect;

public:
	UAddon_TormentMode_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TormentMode_18) { return 0; }
