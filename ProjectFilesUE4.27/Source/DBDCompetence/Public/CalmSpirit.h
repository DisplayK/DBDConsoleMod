#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "CalmSpirit.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCalmSpirit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _calmSpiritEffectClass;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeed;

public:
	UCalmSpirit();
};

FORCEINLINE uint32 GetTypeHash(const UCalmSpirit) { return 0; }
