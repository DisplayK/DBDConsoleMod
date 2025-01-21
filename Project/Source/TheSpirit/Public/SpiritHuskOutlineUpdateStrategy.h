#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "SpiritHuskOutlineUpdateStrategy.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THESPIRIT_API USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

public:
	USpiritHuskOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USpiritHuskOutlineUpdateStrategy) { return 0; }
