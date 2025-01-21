#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Oppression.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOppression : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _nbGeneratorsAffectedByPerk;

	UPROPERTY(EditDefaultsOnly)
	int32 _perkCooldown;

public:
	UOppression();
};

FORCEINLINE uint32 GetTypeHash(const UOppression) { return 0; }
