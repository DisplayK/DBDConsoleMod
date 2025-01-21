#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "ShopLubricantAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UShopLubricantAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _auraBlockingDuration;

	UPROPERTY(EditDefaultsOnly)
	float _auraVisibleDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hiddenFromOtherSurvivorsWhileDyingEffectClass;

public:
	UShopLubricantAddon();
};

FORCEINLINE uint32 GetTypeHash(const UShopLubricantAddon) { return 0; }
