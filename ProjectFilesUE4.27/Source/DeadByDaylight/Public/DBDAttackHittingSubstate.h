#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackHittingSubstate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttackHittingSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FStatProperty _hittingPercentDamageBegin;

public:
	UDBDAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackHittingSubstate) { return 0; }
