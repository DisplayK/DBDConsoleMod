#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_MuralSketch.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_MuralSketch : public UItemAddon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float _speedBonusPerHit;

public:
	UAddon_Frenzy_MuralSketch();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_MuralSketch) { return 0; }
