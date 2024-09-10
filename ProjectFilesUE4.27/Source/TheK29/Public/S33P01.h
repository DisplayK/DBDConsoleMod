#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S33P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US33P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _S33P01StatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _interactionProgressionAmount;

public:
	US33P01();
};

FORCEINLINE uint32 GetTypeHash(const US33P01) { return 0; }
