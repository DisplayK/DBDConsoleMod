#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NurseFXInterface.generated.h"

UINTERFACE(Blueprintable)
class THENURSE_API UNurseFXInterface : public UInterface
{
	GENERATED_BODY()
};

class THENURSE_API INurseFXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SpawnSpasmodicBreathVignette();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpasmodicBreathAddonEffectActive(bool activeValue);

};
