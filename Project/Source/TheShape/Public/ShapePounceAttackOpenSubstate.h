#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "DBDTunableRowHandle.h"
#include "ShapePounceAttackOpenSubstate.generated.h"

UCLASS()
class THESHAPE_API UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FDBDTunableRowHandle> _tierDurations;

public:
	UShapePounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UShapePounceAttackOpenSubstate) { return 0; }
