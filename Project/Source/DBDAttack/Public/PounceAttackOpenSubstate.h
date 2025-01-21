#pragma once

#include "CoreMinimal.h"
#include "DBDAttackOpenSubstate.h"
#include "Templates/SubclassOf.h"
#include "PounceAttackOpenSubstate.generated.h"

class UPounceAttackOpenSubstateCosmetic;

UCLASS()
class DBDATTACK_API UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPounceAttackOpenSubstateCosmetic> _pounceOpenStateCosmeticBlueprintClass;

	UPROPERTY(Transient)
	UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintObject;

public:
	UPounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstate) { return 0; }
