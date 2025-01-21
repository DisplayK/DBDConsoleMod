#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "MatchboxAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UMatchboxAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _speedModifier;

public:
	UMatchboxAddon();
};

FORCEINLINE uint32 GetTypeHash(const UMatchboxAddon) { return 0; }
