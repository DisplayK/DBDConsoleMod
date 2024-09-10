#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_TheBlight_14.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_14 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _palletPulldownBlockRange;

	UPROPERTY(EditDefaultsOnly)
	float _palletPulldownBlockSeconds;

public:
	UAddon_TheBlight_14();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_14) { return 0; }
