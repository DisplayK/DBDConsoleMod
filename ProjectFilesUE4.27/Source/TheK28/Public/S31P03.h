#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S31P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US31P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _genRepairSpeedBoostForDullTotem;

	UPROPERTY(EditDefaultsOnly)
	float _genRepairSpeedBoostForHexTotem;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

public:
	US31P03();
};

FORCEINLINE uint32 GetTypeHash(const US31P03) { return 0; }
