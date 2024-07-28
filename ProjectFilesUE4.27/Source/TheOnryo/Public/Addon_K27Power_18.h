#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K27Power_18.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_18 : public UItemAddon
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnIntroCompleted();

public:
	UAddon_K27Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_18) { return 0; }
