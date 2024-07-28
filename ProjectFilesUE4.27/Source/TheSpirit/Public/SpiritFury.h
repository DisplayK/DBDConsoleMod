#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiritFury.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USpiritFury : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _palletToBreakCountPerLevel;

public:
	USpiritFury();
};

FORCEINLINE uint32 GetTypeHash(const USpiritFury) { return 0; }
