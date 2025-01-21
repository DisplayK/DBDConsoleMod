#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Coulrophobia.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoulrophobia : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _coulrophobiaEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _healPenalty;

public:
	UCoulrophobia();
};

FORCEINLINE uint32 GetTypeHash(const UCoulrophobia) { return 0; }
