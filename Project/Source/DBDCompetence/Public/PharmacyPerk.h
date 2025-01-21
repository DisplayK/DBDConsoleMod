#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "PharmacyPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPharmacyPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _pharmacyEffectClass;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _searchSpeeds;

public:
	UPharmacyPerk();
};

FORCEINLINE uint32 GetTypeHash(const UPharmacyPerk) { return 0; }
